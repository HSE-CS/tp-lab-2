#include <iostream>
#include <string.h>
#include <vector>
#include "task3.h"
#include <cstring>


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

int main() {
	const size_t n = 5;
	char arr[n] = { '1','2','3','4','5' };
	map<char, n>(arr, change);
	for (size_t i = 0; i < n; i++) {
		cout << arr[i] << endl;
	}
}