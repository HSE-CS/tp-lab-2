#include <iostream>
#include "task2.h"

using namespace std;

template<class T>
T gen()
{
	int t = rand();
	return t;
}

int main() {
	const int n = 7;
	int* arr = createArr<int, n>(gen);
	for (int i = 0; i < n; ++i) 
		cout << arr[i] << endl;
	return 0;
}