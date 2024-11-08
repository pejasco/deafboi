#pragma once 

#include "../include/Common.hpp"

class Bus
{
    public:
        byte bus_read(u16 address);
        void bus_write(u16 address, byte value);
};



