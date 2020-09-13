#include <iostream>
#include <random>
#include "time.h"

#include "cpp_header.h"

Foo::Foo() {}
Foo::~Foo() {}

/*
This will loop through the array
and if any element > 0
it will return TRUE
*/
bool is_array_full() {
    flag = false;
    for(int i : arr) {
        flag += i > 0;
    }
    return flag;
}