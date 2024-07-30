#ifndef LOGGER_H
#define LOGGER_H

#include <iostream>
#include <string>
#include <windows.h>
#include <ctime>

#define E_OK            0x01
#define E_NOT_OK        0x00

class Logger {
private:

public:
    void SetColor(int color);
    void log(const std::string& message);
};

#endif // LOGGER_H