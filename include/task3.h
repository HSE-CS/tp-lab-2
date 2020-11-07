/*
 * @author Stanislav Stoianov
 */

/*
 * Написать шаблонную функцию map, принимающую по ссылке массив элементов типа T и
 * выполняющую преобразование каждого элемента в соответетствии с шаблонной функцией change,
 * указатель на которую передается в map.
 */

#ifndef TASK1_TASK3_H
#define TASK1_TASK3_H

#include <iostream>

template<typename T, const size_t size>
void map(T *arraylist, T (*lambda)(T)) {
    for (size_t i = 0; i < size; i++) arraylist[i] = lambda(arraylist[i]);
}

#endif