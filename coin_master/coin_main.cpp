#include "src/coin_master.cpp"

char coin_INIT()
{
    if(coin_master_INIT() == 0x01)
    {
        return 0x01;
    }

    return 0x00;
}