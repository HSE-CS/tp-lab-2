#include <iostream>
#include <string.h>
#include "task3.h"

using namespace std;

template<typename E> E square(E x) //specialisation for char type is excessive due to ascii representation in int type and each symbol is printed separately
{
	return x*x;
}

template<> char* square(char* x) //its useless function for strings and other char data but it is just an example :)
{
	int len = strlen(x);
	for (int i = 0; i < len; i++) {
		x[i] = x[i] * x[i];
	}
	return x;
}

int main()
{
	int randArr[] = { 7, 12, -2, 3, 1, 0, -5 }, j = 0;
	float randArrD[] = { 7.3, 12.1, -2.3, 3.7, 1, 0, -5.4 };
	char stringArr[] = { "hello" };
	char *stringsProt[] = { "hello","world","bye" };
	char *stringsArr[3];

	for (int i = 0; i < 3; i++) {
		stringsArr[i] = new char[6];
		for (j = 0; j < 5; j++) {
			stringsArr[i][j] = stringsProt[i][j];
		}
		stringsArr[i][j] = '\0';
	}

	map(randArr, square);
	map(randArrD, square);
	map(stringArr, square);
	map(stringsArr, square);

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

	for (auto item : stringsArr)
	{
		cout << item << ' ';
	}
	cout << endl;

	return 0;
}