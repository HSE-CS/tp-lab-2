#include <iostream>
#include <stdio.h>
#include "task1.h"
using namespace std;

int main()
{
	
	const size_t n = 6;
	char* val[n]{ (char*)"ffff", (char*)"fff2", (char*)"f", (char*)"ff", (char*)"vvv", (char*)"fffrr" };
	msort(val, n);
	for (size_t i = 0; i < n; i++)
		cout << val[i] << " ";
	cout << endl;

	const size_t s = 6;
	double val1[s]{ 4.0, 3.0, 2.4, 2.5, 2.1, -1 };
	msort(val1, s);
	for (size_t i = 0; i < s; i++)
		cout << val1[i] << " ";
	cout << endl;
	return 0;
}
