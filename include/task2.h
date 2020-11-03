#ifndef TASK1_TASK2_H
#define TASK1_TASK2_H

template <typename T, size_t N>
T* createArr(T(*gen) ())
{
    T* array = new T[N];
    for (int i = 0; i < N; i++)
        array[i] = gen();

    return array;
}

template <typename T>
T gen()
{
    return '\0';
}

#endif //TASK1_TASK2_H
