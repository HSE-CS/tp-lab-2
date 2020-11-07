#include "task2.h"

int main() 
{
	 const int N = 8;
	 int* arr = createArr<int, N>(gen);
	 for (int i = 0; i < N; i++) 
	 {
		 cout << arr[i] << "  ";
	 };
	 cout << endl;
	 delete[] arr;
	 return 0;
}
