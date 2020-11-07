#ifndef TASK2_H
#define TASK2_H

#include <climits>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <typeinfo>

template <typename T, size_t N> T* createArr(T (*gen)()){
    T* array = new T[N];
    for (size_t i = 0; i<N;++i){
        array[i] = gen();
    }
    return array;
}

template <typename T>T generate(){
    T start = -100;
    T finish = 1000;
    T result = start + (double)rand() / RAND_MAX * (finish - start);
    return result;
}

#endif