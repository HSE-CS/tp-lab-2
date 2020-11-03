#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
#include "task1.h"

using namespace std;

int main(){
    const size_t n = 5;
    int arr[5]={-5,20,15,-50,60};
    msort(arr,n);
    for (size_t i=0; i<n;++i)
        cout << arr[i] << '\t';
    cout<<endl;
    return 0;
}
