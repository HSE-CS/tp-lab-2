#include"task1.h"
using namespace std;

int main() {
	int I[] = { 4, 1, 5, 3, 2 };
	msort(I, 5);
	for (size_t i = 0; i < 5; i++) {
		cout << I[i] << ' ';
	}
	cout << endl;

	double D[] = { 4.13, 1.0001, 5.102, 5.101, 203.1 };
	msort(D, 5);
	for (size_t i = 0; i < 5; i++) {
		cout << D[i] << ' ';
	}
	cout << endl;

	char* C[6]{ (char*)"ffff", (char*)"fff2", (char*)"f", (char*)"ff", (char*)"vvv", (char*)"fffrr" };
	msort(C, 6);
	for (size_t i = 0; i < 6; i++) {
		cout << C[i] << ' ';
	}
	cout << endl;

	return 0;
}