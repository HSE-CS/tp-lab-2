//
// Created by victor on 08.11.2020.
//

#ifndef TASK1_TASK2_H
#define TASK1_TASK2_H
template<typename T, size_t SIZE>
T *createArr(T(*gen)()) {
    T *array = new T[SIZE];
    for (int i = 0; i < SIZE; ++i)
        array[i] = gen();
    return array;
}
#endif //TASK1_TASK2_H
