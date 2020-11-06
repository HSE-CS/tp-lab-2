#include <iostream>
#include <string.h>
#include "task1.h"
#define N 10
#define S 4

using  namespace std;

int main()
{
    int  int_arr[N]={ 8, 456, 1235, 1,45657, 234567,-1244,-1346,-8,-1 };
    msort(int_arr,N,0,N-1);
    for ( int i = 0; i < N; i++ ) {
        cout << int_arr[i] << ' ';
    }
    cout << endl;

    double d_arr[N]= { 8.7, 456.0, 1235.123, 1.7,457.88, 2367.98,-1244.986,-136.452,-8.8,-1.943 };
    msort(d_arr,N,0,N-1);
    for (int i = 0; i < N; i++) {
        cout << d_arr[i] << ' ';
    }
    cout << endl;

    char* s_arr[S]{ (char*)"msssssss", (char*)"m", (char*)"mas", (char*)"ma" };
    msort(s_arr,S,0,S-1);
    for (int i = 0; i < S; i++) {
        cout << s_arr[i] << ' ';
    }
    cout << endl;

	return 0;
}

