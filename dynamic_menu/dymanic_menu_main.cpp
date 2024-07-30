#include "src/dynamic_menu.cpp"

char dynamic_menu_main_INIT()
{
    if(dynamic_menu_INIT() == 0x01)
    {
        return 0x01;
    }

    return 0x00;
}