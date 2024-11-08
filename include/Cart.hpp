#pragma once

#include "../include/Common.hpp"
#include "CartHeader.hpp"

class Cart
{
    public:
        Cart(byte& src_data, int size);
        ~Cart

    private:
        byte* src_data;
        int file_size;
        CartHeader header;
};