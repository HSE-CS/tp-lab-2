#ifndef TASK1_TASK3_H
#define TASK1_TASK3_H

#include <iostream>
#include <cstring>


template <typename T, int n> void map(T* array, T (*change)(T value))
{
    for(size_t i = 0; i < n; i++) array[i] = change(a[i]);
}


template <typename T, int n> void map(char** array, char* (*change)(char* value))
{
    for(size_t i = 0;i < n;i++)
    {
        char* help_arr = new char[strlen(a[i]) + 1];

        for(size_t j = 0;j < strlen(array[i]);j++) help_arr[j] = array[i][j];
        
        help_arr[strlen(array[i])] = '\0';
        
        array[i] = change(help_arr);
    }
}

#endif 