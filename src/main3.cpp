#include <iostream>
#include "task3.h"
using namespace std;

template <typename T>
T my_func(T arg){
    return arg * arg;
}

int main(){
    const int n = 6;
    int *arr = new int[n]{5, 3, 2, 4, 1, 6};

    for(int i = 0; i < 6; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    auto a = arr[0];
    map<decltype(a), n>(arr, my_func);

    for(int i = 0; i < 6; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
