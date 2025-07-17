#ifndef DEBUGLOGGING_H
#define DEBUGLOGGING_H

#include <iostream>
#include <string>

inline const char* c_GREEN = "\033[92m";
inline const char* c_MAGENTA = "\033[95m";
inline const char* c_YELLOW = "\033[93m";
inline const char* c_RED = "\033[91m";
inline const char* c_DEFAULT = "\033[39;49m";

/** @brief
 * Output to the terminal.
 * Used for debugging and logging warning/errors.
**/

struct DebugLogger {
    template<typename T>
    static void LogConsoleMessage(const char* location, const T &content) {
        std::cout << "[" << c_MAGENTA << location << c_DEFAULT << "] [" << c_GREEN << "INFO"<< c_DEFAULT << "] "<< content << "\n";
    }

    template<typename T>
    static void LogConsoleWarning(const char* location, const T &content) {
        std::cout  << "[" << c_MAGENTA << location << c_DEFAULT << "] ["<< c_YELLOW << "WARNING"<< c_DEFAULT << "] "<< content << "\n";
    }

    template<typename T>
    static void LogConsoleError(const char* location, const T &content) {
        std::cout << "[" << c_MAGENTA << location << c_DEFAULT << "] [" << c_RED << "ERROR"<< c_DEFAULT << "] "<< content << "\n";
    }
};

#endif