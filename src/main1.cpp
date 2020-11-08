#include "task1.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	const size_t n = 6;
	int val[n]{ 4,4,1,2,3,5 };
	msort(val, n);

	for (size_t i = 0; i < n; i++)
		cout << val[i] << ' ';
	cout << '\n';

	const size_t a = 6;
	char* v[a]{ (char*)"ffff", (char*)"fff2", (char*)"f", (char*)"ff", (char*)"vvv", (char*)"fffrr" };
	msort(v, a);
	for (size_t i = 0; i < a; i++)
		cout << v[i] << ' ';
	return 0;
}