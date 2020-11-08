#include "task1.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	const size_t n = 8;
	int val[n]{ 8,10,30,50,5,1,5,78 };
	msort(val, n);

	for (size_t i = 0; i < n; i++)
		cout << val[i] << ' ';
	return 0;
}