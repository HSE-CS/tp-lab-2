#include "task3.h"

int cube(int x){
    return x*x*x;
}

int main(){
    srand(time(0));

    const size_t size = 10;
    int arr[size];
    cout << "Start array:" <<endl;
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 10;
        cout << arr[i] << " ";
    } cout << endl;

    map<int, size>(arr, cube);

    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    } cout << endl;

    return 0;
}