#include <iostream>
#include "task3.h"

using namespace std;

int main()
{
	int randArr[] = { 7, 12, -2, 3, 1, 0, -5 };
	float randArrD[] = { 7.3, 12.1, -2.3, 3.7, 1, 0, -5.4 };
	map(randArr, square);
	map(randArrD, square);
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
	return 0;
}