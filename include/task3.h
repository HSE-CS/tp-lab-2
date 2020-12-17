#ifndef TASK3_H
#define TASK3_H

using namespace std;

template <typename T, int n> 
void map(T* arr, T(*change)(T)) 
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = change(arr[i]);
	}
}

#endif