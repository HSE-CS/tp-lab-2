#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <iostream>
#include <string>
template<class T,size_t n>
void map(T (&a)[n],T (*change)(T))
{
	for(int i = 0; i < n; i++)
	{
		a[i] = change(a[i]);
	}
}