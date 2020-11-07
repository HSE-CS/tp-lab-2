#ifndef TASK3_H
#define TASK3_H

#include <iostream>
#include <typeinfo>
#include <cmath>
#include <cstdlib>

template <typename T, size_t n> void map (T array[], T (*change)(T a)){
    for (size_t i = 0; i<n;++i){
        array[i] = change(array[i]);
    }
}

template <typename T> T makeDouble (T a){
    return 2*a;
}

#endif