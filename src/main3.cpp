//
// Created by stoja on 03.11.2020.
//

#include "task3.h"
#include <iostream>

template <typename T> T change(T val)
{
    return val + 10;
}

using namespace std;
int main(){
    const size_t n = 5;
    int arr[n]{1, 2, 3, 4, 5};
    map<int, n>(arr, change);

    int expected[n]{2, 3, 4, 5, 6};

    for(size_t i = 0; i < n; i++)
        cout<<expected[i]<< " " << arr[i]<<"\n";
    return 0;
}