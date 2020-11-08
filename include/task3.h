#include <iostream>
#include <cstring>



template<class T, size_t n>
void map(T* a, T(*change)(T))
{
	for (int i = 0; i < n; i++)
		a[i] = change(a[i]);
}