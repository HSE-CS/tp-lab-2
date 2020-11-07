#ifndef TASK1_TASK2_H
#define TASK1_TASK2_H

template <typename T, int n> T* createArr(T (*gen)(void))
{
    T* array = new T[n];

    for(int i = 0; i < n; i++)array[i] = gen();
    
    return array;
}

#endif 