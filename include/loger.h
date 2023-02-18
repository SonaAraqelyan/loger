#pragma once
#include <iostream>
#include <fstream>
#include <source_location>

class loger{
    public:
        enum class level{
            Error,
            Warning,
            Info,
        };

        loger(const std::string &path);
        void log(level lev, const std::string &message, const std::source_location location = std::source_location::current());
        ~loger();

    private:
        std::string convert(level lev);

        std::fstream worker;

};