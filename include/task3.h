#ifndef TASK3_H_INCLUDED
#define TASK3_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <iostream>
#include <cstring>

template<class T, size_t SIZE> void map(T arr[], T (*f_change)(T))
{
	for(int i = 0; i < SIZE; i++ )
		arr[i] = f_change(arr[i]);
}

int change_mod_2020 (int a)
{
    return a%2020;
}



#endif // TASK3_H_INCLUDED
