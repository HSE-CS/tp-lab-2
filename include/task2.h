//
// Created by Алексей Трутнев on 07.11.2020.
//

#include<iostream>
#include <random>

template<class T, size_t size>
T* createArr(T (*gen)() ){
    T* arr = new T[size];
    for (size_t i = {0}; i < size; ++i)
        arr[i] = {gen()};
    return arr;
}

int generate(){
    std::random_device rd;
    std::uniform_int_distribution<int> uid(-50, 50);
    return uid(rd);
}

