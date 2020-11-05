#include <iostream>
#include <string.h>
#include "task1.h"
#define SIZE 12

using namespace std;

int main()
{
	int *intsArr = new int[SIZE]{ 4, -5, 2, 0, 23, 68, -11, 4, 4, 3, 29, 1 };
	double *dArr = new double[SIZE]{ 4.5, 2.9, -1.1, 0, 1, 23.6, 12, 70.03, 70.1, -3.4, 11, 11.2 };
	char *strings[SIZE] = { "taki", "kew", "iuwi8", "89tb", "654s", "_&^^5", "jr5", "jckxy", "7ftc", "j6", "gtuyxzdufyiu", "y7t865drt" };
	char **strArr = new char*[SIZE];

	for (int i = 0; i < SIZE; i++) {
		strArr[i] = new char[strlen(strings[i] + 1)];
		for (int j = 0; j < strlen(strings[i]); j++) {
			strArr[i][j] = strings[i][j];
		}
		strArr[i][strlen(strings[i])] = '\0';
	}

	msort(intsArr, SIZE);
	msort(dArr, SIZE);
	msort(strArr, SIZE);

	for (int i = 0; i < SIZE; i++) {
		cout << intsArr[i] << ' ';
	}
	cout << endl;

	for (int i = 0; i < SIZE; i++) {
		cout << dArr[i] << ' ';
	}
	cout << endl;

	for (int i = 0; i < SIZE; i++) {
		cout << strArr[i] << endl;
	}

	delete[]intsArr;
	delete[]dArr;
	delete[]strArr;

	return 0;
}
