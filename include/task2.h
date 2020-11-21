//
// Created by toliman on 08.11.2020.
//

#ifndef TASK1_TASK2_H
#define TASK1_TASK2_H


template<typename T, int size>
T *createArr(T (*gen)()) {

    auto array = new T[size];

    for (int i = 0; i < size; ++i)
        array[i] = gen();

    return array;
}

#endif //TASK1_TASK2_H
