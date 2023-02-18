#include <iostream>
#include "loger.h"

int main(){
    loger log_1("C:/Users/araqe/OneDrive-/Desktop/project_log/LogList");
    log_1.log(loger::level::Info, "This is the first info in this project.\n");

    return 0;
}