#pragma once

#include <string>

namespace common {
    class Logger {
    public:
        static void log(const std::string& message);
    };
}