#include "task2.h"

template<typename T>
T gen()
{
	return 1;
}

int main() 
{
	 const int N = 8;
	 int* arr = createArr<int, N>(gen);
	 for (int i = 0; i < N; i++) 
	 {
		 cout << arr[i] << "\t";
	 };
	 cout << endl;
	 delete[] arr;
	 return 0;
}
