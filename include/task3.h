#pragma once


template<typename T, size_t s >
void map(T* mas, T(*change)(T))
{


	for (int i = 0; i < s; i++)
		mas[i] = change(mas[i]);



}

template< class T>
T change_func(T x)
{

	return x - 3;

}