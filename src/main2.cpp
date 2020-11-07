#include <time.h>
#include "task2.h"

#define SIZE2 10

template<class T>
T gen() {
	static int t = 48;
	return t++;
}

template<>
char* gen() {
	static unsigned t = 0;
	t++;
	char* s = new char[t + 1];

	for (size_t i = 0; i < t; i++)
		s[i] = '0' + i;
	s[t] = '\0';

	return s;
}

/*
int main() {
	srand(time(0));
	int* arr = createArr<int, SIZE2>(gen);
	for (int i = 0; i < SIZE2; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";
	return 0;
}
*/