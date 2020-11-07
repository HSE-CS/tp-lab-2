#include "task1.h"

int main()
{
	const size_t n = 6;
	int val[n] = {5, 3, 2, 4, 1, 6};
	msort(val, 0, n - 1);
	for(auto now : val)
		cout << now << " "; 
	cout << endl;

	const size_t n1 = 6;
	double val1[n1]{ 4.0, 3.0, 2.4, 2.5, 2.1, -1 };
	msort(val1, 0, n1 - 1);
	for (auto now : val1)
		cout << now << " ";

	const size_t n2 = 6;
	char* val2[n]{ (char*)"ffff", (char*)"fff2", (char*)"f", (char*)"ff", (char*)"vvv", (char*)"fffrr" };
	msort(val2, 0, n - 1);
	for (auto now : val2)
		cout << now << " ";
}
