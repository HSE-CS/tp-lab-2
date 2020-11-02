//
// Created by Vadim Makarov on 02.11.2020.
//

#ifndef TEST_TASK2_H
#define TEST_TASK2_H

#include <iostream>
#include <cstring>

using namespace std;

template<class T>
T gen(){
    static size_t elem = 48;
    return elem++;
}

template<>
char * gen(){
    static size_t counter = 0;

    char * str = new char[counter+2];

    for(size_t j = 0; j < counter + 1; j++)
        str[j] = '0' + j;
    str[counter + 1] = '\0';

    ++counter;

    return str;
}


template <class T, size_t size>
T * createArr(T (*fun)()){
    T * arr = new T[size];
    for (int i = 0; i < size; ++i) {
        arr[i] = fun();
    }
    return arr;
}


#endif //TEST_TASK2_H
