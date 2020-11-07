#include "task1.h"

using namespace std;

int main()
{	
	const size_t n = 10;
	int* mass = new int[n] {5, 3, 2, 4, 1, 6, 11, 0 ,-1, -2};

	
	msort(mass, n);


	for (size_t i = 0; i < n; i++)
	{
		cout << mass[i] << endl;
	}
	return 0;
}


