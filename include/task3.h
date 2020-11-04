#pragma once


template<typename T, size_t s >
void map(T* mas, T(*change)())
{


	for (int i = 0; i < s; i++)
		mas[i] = change(mas[i]);



}