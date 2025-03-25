// logger.hpp
#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <string>

namespace logger {
    void log_info(const std::string& msg);
    void log_debug(const std::string& msg);
    void log_error(const std::string& msg);
}

#endif
