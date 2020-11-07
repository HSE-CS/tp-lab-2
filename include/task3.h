//
// Created by jmax on 07.11.2020.
//

#ifndef LAB_2_TASK3_H
#define LAB_2_TASK3_H

template<class T, unsigned int size>
void map(T *arr, T(*changer)(T)) {
    for (unsigned int i = 0; i < size; i++)
        arr[i] = changer(arr[i]);
}

#endif //LAB_2_TASK3_H
