#pragma once

#include "../include/Common.hpp"
#include <cstring>

struct CartHeader
{
    public:
        byte entry[4];
        byte logo[48]; //[0x30]
        char title[16];
        u16 new_lic_code;
        byte sgb_flag;
        byte type;
        byte rom_size;
        byte ram_size;
        byte dest_code;
        byte lic_code;
        byte rom_ver;
        byte checksum;
        u16 global_checksum;
};