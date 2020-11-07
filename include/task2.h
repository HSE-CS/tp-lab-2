#ifndef TASK2_H_INCLUDED
#define TASK2_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <iostream>
#include <cstring>

template<class T, size_t SIZE> T * createArr(T (*f_gen)())
{
	T * arr = new T[SIZE];
	for(int i = 0; i < SIZE; i++ )
	{
		arr[i] = f_gen();
	}
	return arr;
}
int rand_int_mod_1000 ()
{
    return rand()%1000;
}


#endif