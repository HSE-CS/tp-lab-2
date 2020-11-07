#ifndef TASK1_TASK3_H
#define TASK1_TASK3_H


template<class T, size_t size>
void map(T* arr, T(*fun)(T)) 
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = fun(arr[i]);
    }
}


#endif