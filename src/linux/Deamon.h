#ifndef DEAMON_H
#define DEAMON_H
#include "DeamonManager.h"
#include <functional>

namespace bre {
namespace unix{

struct DeamonInfo
{
    std::string m_name{};

};

class Deamon
{
public:
    explicit Deamon(std::string);
    explicit Deamon(DeamonInfo&);
    ~Deamon();
    void setName(std::string name) noexcept
    {
        m_info.m_name = name;
    }
    std::string getName() const noexcept
    {
        return m_info.m_name;
    }

    const platform::SERVICE_STATUS_PROCESS& proc_status() noexcept
    {
        return m_ssp;
    }
    const platform::SERVICE_STATUS&status() noexcept
    {
        return m_ss;
    }
    bool run(std::function<platform::OS_SPECIFIC_INTEGER_TYPE()>&&,std::function<void()>&&);
private:

    friend DeamonManager;
    DeamonInfo m_info;
    platform::SERVICE_STATUS_PROCESS m_ssp;
    platform::SERVICE_STATUS m_ss;
};



} /// unix
}/// bree

#endif
