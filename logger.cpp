#include "logger.h"
#include <ctime>

Logger::Logger(const std::string& fileName) {
    logFile.open(fileName, std::ios::app);
}

Logger::~Logger() {
    if (logFile.is_open()) {
        logFile.close();
    }
}

void Logger::log(const std::string& message) {
    if (logFile.is_open()) {
        std::time_t now = std::time(nullptr);
        logFile << std::time(&now) << ": " << message << std::endl;
    }
}
