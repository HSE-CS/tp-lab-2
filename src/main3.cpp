/*#include "task3.h"

template<class T>
T change(T val)
{
	return val + 1;
}

template<>
char* change(char* val)
{
	size_t n = strlen(val);
	for (size_t i = 0; i < n; i++)
		val[i] = val[i] + 1;
	return val;
}

int main()
{
	char my_arr[4] = { 'a','b','c','d' };
	map(my_arr, change);
	for (auto item : my_arr)
		cout << item<<" ";
}*/