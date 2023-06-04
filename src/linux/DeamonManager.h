#ifndef DEAMON_MANAGER_H
#define DEAMON_MANAGER_H
#include <vector>
#include <string>

namespace bre {
namespace platform {

using OS_SPECIFIC_INTEGER_TYPE = int;

struct SERVICE_STATUS_PROCESS {
OS_SPECIFIC_INTEGER_TYPE dwCheckPoint{0};
OS_SPECIFIC_INTEGER_TYPE dwWaitHint{0};
OS_SPECIFIC_INTEGER_TYPE dwCurrentState{0};

};
struct SERVICE_STATUS {

};


}/// platform
namespace unix {

class Deamon;
class DeamonManager
{
public:
    DeamonManager();
    ~DeamonManager();
    bool open(platform::OS_SPECIFIC_INTEGER_TYPE dwDesiredAccess = 0);
    bool install(Deamon&);
    bool install(Deamon&,std::vector<std::string>&);
    bool uninstall(Deamon&);
    bool status(Deamon&);
    bool start(Deamon&);
    bool stop(Deamon&);
    bool close();
};
}/// unix
}/// bree

#endif // DEAMON_MANAGER_H

