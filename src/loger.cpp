#include "loger.h"

loger::loger(const std::string& path){
    worker.open(path,std::ios::app);
}

void loger::log(level lev, const std::string &message, const std::source_location location){
    if(worker.is_open()){
        worker <<convert(lev)
            << ": "
            << "file: "
            << location.file_name() << "("
            << location.line() << ":"                
            << location.column() << ") `"
            << location.function_name() << "`: "
            << message << '\n';
    }
}

std::string loger::convert(level lev){
    if(lev == level::Error){
        return "Error";
    }
    else if(lev == level::Warning){
        return "Warning";
    }else if(lev == level::Info){
        return "Info";
    }
}

loger::~loger(){
    worker.close();
}