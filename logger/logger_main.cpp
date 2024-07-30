#include "src/logger.cpp"

char Init()
{
    Logger message;
    int c_nt = 0;

    //<----------------------------------------------------------------------------------------- COIN MASTER INIT()
    if(coin_INIT() == E_OK)
    {
        c_nt++;

        Sleep(1000);

        message.SetColor(10);
        message.log("Coin Master - Initialization Succeseful.");
    }
    else if(coin_INIT() == E_NOT_OK)
    {
        message.SetColor(12);
        message.log("Coin Master - Please check conection between main() and Problem Module.");
    }

    //<---------------------------------------------------------------------------------------- DINAMIC MENU INIT()
    if(dynamic_menu_INIT() == E_OK)
    {
        c_nt++;

        Sleep(1000);

        message.SetColor(10);
        message.log("Dynamic Menu - Initialization Succeseful.");
    }
    else if(dynamic_menu_INIT() == E_NOT_OK)
    {
        message.SetColor(12);
        message.log("Coin Master - Please check conection between main() and Problem Module.");
    }

    //<-------------------------------------------------------------------------------------------- TRIGGERS INIT()
    if(trigger_INIT() == E_OK)
    {
        c_nt++;

        Sleep(1000);

        message.SetColor(10);
        message.log("Dynamic Menu - Initialization Succeseful.");
    }
    else if(trigger_INIT() == E_NOT_OK)
    {
        message.SetColor(12);
        message.log("TRIGGERS - Please check conection between main() and Problem Module.");
    }

    //<-------------------------------------------------------------------------------------------- INIT() MODULE
    if(c_nt == 3)
    {
        message.SetColor(10);
        message.log("4FUN PROJECT - Initialization Succeseful.");

        Sleep(2000);
        message.SetColor(7);

        return E_OK;
    }
    else if(c_nt != 3)
    {
        message.SetColor(12);
        message.log("4FUN PROJECT - Initialization ERROR.");

        Sleep(2000);
        message.SetColor(7);

        return E_NOT_OK;
    }

    return E_NOT_OK;
}