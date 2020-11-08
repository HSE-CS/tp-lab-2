#include <iostream>
#include "task2.h"

using namespace std;

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


int main() {
	srand(time(nullptr));

	const size_t N = 10;
	int* arr;
	arr = createArr<int, N>(gen);
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << endl;
	}

	return 0;
}