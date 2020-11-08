#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <iostream>
#include <string>
template<class T,size_t n>
T * createArr(T (*gen)())
{
	T * arr = (T*)calloc(n,sizeof(T));
	for(int i = 0; i < n; i++ )
	{
		arr[i] = gen();
	}
	return arr;
}
