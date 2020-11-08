#include <iostream>
#include <stdio.h>
#include <string.h>
#include "task1.h"


int main() {

	const size_t n = 6;
	int* val = new int[n] {5, 3, 2, 4, 1, 6};
	msort(val, n); 
	for (int i = 0; i < n; i++) std::cout << val[i] << ' ';
	std::cout << '/n';

	/*double val[n]{ 4.0, 3.0, 2.4, 2.5, 2.1, -1 };
	msort(val, n);
	for (int i = 0; i < n; i++) std::cout << val[i] << ' ';
	std::cout << '/n';

	char* val[n]{ (char*)"ffff", (char*)"fff2", (char*)"f", (char*)"ff", (char*)"vvv", (char*)"fffrr" };
	msort(val, n);
	for (int i = 0; i < n; i++) std::cout << val[i] << ' ';*/
	return 0;
}