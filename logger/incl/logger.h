#ifndef LOGGER_H
#define LOGGER_H

#include <iostream>
#include <string>
#include <windows.h>
#include <ctime>

class Logger {
private:

public:
    void SetColor(int color);
    void log(const std::string& message);
};

#endif // LOGGER_H