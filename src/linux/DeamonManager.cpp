#include "DeamonManager.h"



namespace bre {
namespace unix {

    bool DeamonManager::open(platform::OS_SPECIFIC_INTEGER_TYPE){

    return true;
    }
    bool DeamonManager::install(Deamon&){

        return true;
    }
    bool DeamonManager::install(Deamon&,std::vector<std::string>&){

        return true;
    }
    bool DeamonManager::uninstall(Deamon&){

        return true;
    }
    bool DeamonManager::status(Deamon&){


        return true;
    }
    bool DeamonManager::start(Deamon&){


        return true;
    }
    bool DeamonManager::stop(Deamon&){


    return true;
    }
    bool DeamonManager::close(){

    return true;
    }

}/// unix
} /// bree
