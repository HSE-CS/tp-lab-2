#include <iostream>
#include "task1.h"
using namespace std;

int main(){
    const int n = 6;
    int *val = new int[n]{5, 3, 2, 4, 1, 6};
    msort(val, n);
    for(int i = 0; i < n; i++){
        cout << val[i] << " ";
    }
    cout << endl;

    const int n2 = 6;
    char **val2 = new char*[n2]{"1", "111", "00", "0", "00000", "11"};
    msort(val2, n2);
    for(int i = 0; i < n; i++){
        cout << val2[i] << " ";
    }
    cout << endl;
    return 0;
}
