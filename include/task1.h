#ifndef TASK1_H
#define TASK1_H
#include <iostream>
using namespace std;

template<typename T> 
void msort(T* array, size_t size){
    sort(array, 0, size-1);
}
#endif