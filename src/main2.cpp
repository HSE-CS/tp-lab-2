#include <iostream>
#include <string.h>
#include <vector>
#include "task2.h"
#include <cstring>


template<class T>
T gen()
{
	static int t = 48;
	return t++;
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

int main() {
    const size_t N = 5;
	char* arr;
	arr = createArr <char, N>(gen);
	for (int i = 0; i < N; i++) {
		cout << arr[i] << endl;
	}
}