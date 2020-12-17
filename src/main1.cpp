#include <iostream>
#include <string.h>
#include <vector>
#include "task1.h"
#include <cstring>


int main() {
	int arrInt[6] = { 5, 3, 0, 1, 2, 4 };
	msort<int>(arrInt, 6);
	for (int i = 0; i < 6; i++)
	{
		cout << arrInt[i] << " ";
	}
	cout << endl;

	double arrDouble[6] = { 4.0, 3.0, 2.4, 2.5, 2.1, -1 };
	msort<double>(arrDouble, 6);
	for (int i = 0; i < 6; i++) {
		cout << arrDouble[i] << " ";
	}
	cout << endl;


	char* arrChar[6] = { (char*)"ffff", (char*)"fff2", (char*)"f", (char*)"ff", (char*)"vvv", (char*)"fffrr" };
	msort<char*>(arrChar, 6);
	for (int i = 0; i < 6; i++) {
		cout << arrChar[i] << " ";
	}
	cout << endl;
}