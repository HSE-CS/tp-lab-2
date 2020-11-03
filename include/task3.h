#ifndef TASK1_TASK3_H
#define TASK1_TASK3_H

template <typename T, size_t size>
void map(T array[], T(*change)(T))
{
    for (int i = 0; i < size; ++i)
        array[i] = change(array[i]);
}

#endif //TASK1_TASK3_H