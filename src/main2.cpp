#include <iostream>
#include "task2.h"


int gen()
{
	static int t = 0;
	return t++;
}


char* gen1()
{
	static unsigned t = 0;
	t++;
	char* s = new char[t + 1];

	for (size_t i = 0; i < t; i++)
		s[i] = '0' + i;
	s[t] = '\0';

	return s;
}

int main()
{
	char** array = createArr<char*, 5>(gen1);

	for (int i = 0; i < 5; i++)
		std::cout << array[i] << " ";

	return 0;
}