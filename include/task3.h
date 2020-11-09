//
// Created by toliman on 08.11.2020.
//

#ifndef TASK1_TASK3_H
#define TASK1_TASK3_H

template<typename T, int size>
T *map(T *array, T(*homomorphism)(T)) {
    
    for (int i = 0; i < size; ++i)
        array[i] = homomorphism(array[i]);
}

#endif //TASK1_TASK3_H
