#ifndef LOGGER_H
#define LOGGER_H

#include <iostream>
#include <string>
#include <windows.h>
#include <ctime>

//<------------------------------------- MODULE INCLUDE
#include "../../coin_master/incl/coin_master.h"
#include "../../dynamic_menu/incl/dynamic_menu.h"
#include "../../trigger/incl/trigger.h"
///////////////////////////////////////////////////////

#define E_OK            0x01
#define E_NOT_OK        0x00

class Logger {
private:

public:
    void SetColor(int color);
    void log(const std::string& message);
};

#endif // LOGGER_H