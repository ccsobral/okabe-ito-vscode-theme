#ifndef CPP_H
#define CPP_H

#include <stdint.h>

class Foo{
    private:
        const uint8_t arr[4] //4-byte array

    public:
        bool flag;

        Foo();
        ~Foo();

        bool is_array_full();
};

#endif CPP_H