// logger.cpp
#include "logger.hpp"
#include <iostream>

namespace logger {
    void log_info(const std::string& msg) {
        std::cout << "[INFO] " << msg << std::endl;
    }

    void log_debug(const std::string& msg) {
        std::cout << "[DEBUG] " << msg << std::endl;
    }

    void log_error(const std::string& msg) {
        std::cerr << "[ERROR] " << msg << std::endl;
    }
}
