#include <iostream>
#include <cstring>
#include "task1.h"

using namespace std;

int main() {
	const size_t size = 6;
	int* val = new int[size] {5, 3, 2, 4, 1, 6};
	msort(val, size);
	for (int i = 0; i < size; i++)
	{
		cout << val[i] << " ";
	}
	cout << endl;

	char* val2[size]{ (char*)"ffff", (char*)"fff2", (char*)"f", (char*)"ff", (char*)"vvv", (char*)"fffrr" };
	msort(val2, size);
	for (char* number : val2)
		cout << number << " ";
	cout << endl;



	return 0;
}