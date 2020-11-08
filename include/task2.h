#include <iostream>
#include <cstdlib>
#include <ctime>


template<class T>
T gen()
{
	static int t = 48;
	return t++;
}

char* gen()
{
	int t = rand() % 5;
	char* s = new char[t + 1];
	for (size_t i = 0; i < t; i++) {
		s[i] = '0' + i;
	}
	s[t] = '\0';

	return s;
}

template<>
char* gen()
{
	static unsigned t = 0;
	t++;
	char* s = new char[t + 1];

	for (size_t i = 0; i < t; i++)
		s[i] = '0' + i;
	s[t] = '\0';

	return s;
}


template <typename T, const size_t N>
T* createArr(T(*gen)())
{
	T* arr = new T[N];
	for (size_t i = 0; i < N; i++) {
		arr[i] = gen();
	}
	return arr;
}


