#include <iostream>
#include "task2.h"
using namespace std;

template<class T>
T gen()
{
    static int t = 48;
    return t++;
}

int main(){
    const int n = 5;
	int* arr = createArr<int, n>(gen);

	for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
	}
	cout << endl;

    return 0;
}
