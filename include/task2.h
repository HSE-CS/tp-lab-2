/*
 * @author Stanislav Stoianov
 */

/*
 * Написать шаблонную функцию createArr, создающую динамический массив элементов типа T размером N.
 * Каждый элемент массива возвращается внешней шаблонной функцией gen, указатель на которую принимает функция createArr.
 */

#ifndef TASK1_TASK2_H
#define TASK1_TASK2_H

#include <cstdlib>

template<typename T, const size_t N>
T *createArr(T(*gen)()) {
    T *arr = new T[N];
    for (size_t i = 0; i < N; i++) arr[i] = gen();
    return arr;
}

#endif