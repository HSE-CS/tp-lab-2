#include <iostream>
#include "task3.h"

using namespace std;

template<typename E> E square(E x) //specialisation for char type is excessive due to ascii representation in int type and each symbol is printed separately
{
	return x*x;
}

int main()
{
	int randArr[] = { 7, 12, -2, 3, 1, 0, -5 };
	float randArrD[] = { 7.3, 12.1, -2.3, 3.7, 1, 0, -5.4 };
	char stringArr[] = { "hello" };

	map(randArr, square);
	map(randArrD, square);
	map(stringArr, square);

	for (auto item : randArr)
	{
		cout << item << ' ';
	}
	cout << endl;

	for (auto item : randArrD)
	{
		cout << item << ' ';
	}
	cout << endl;

	for (auto item : stringArr)
	{
		cout << item << ' ';
	}
	cout << endl;

	return 0;
}