#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
#include "task1.h"

using namespace std;

int main(){
    const size_t size = 5;
    float array[size]{ 2.0, 213.4, 2.0, -1.22, -1.23};
    msort(array,size);
    for (double number : array)
        cout << number << '\t';
    cout<<endl;
    return 0;
}