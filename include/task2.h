#include <iostream>
#include <cstring>
#include <typeinfo>
using namespace std;

template<typename T, size_t size>
T *createArr(T (*a)()) {
    T *array = new T[size];
    for (size_t i = 0; i < size; i++)
        array[i] = a();
    return array;
}