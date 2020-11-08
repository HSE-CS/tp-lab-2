#include <iostream>
#include "task3.h"

using namespace std;

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

	int arr1[n]{ 1, 2, 3, 4, 5 };
	map<int, n>(arr1, change);
	for (int i = 0; i < n; i++)
		cout << arr1[i] << " ";
	cout << endl;

}