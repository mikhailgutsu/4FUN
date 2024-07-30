#include "src/trigger.cpp"

char trigger_main_INIT()
{
    if(trigger_INIT() == 0x01)
    {
        return 0x01;
    }

    return 0x00;
}