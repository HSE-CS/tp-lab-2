#include "task2.h"

int genRand(){
    return rand();
}

int main(){
    srand(time(0));

    const size_t size = 5;
    int *arr = createArr<int, size>(genRand);
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << endl;
    }
    return 0;
}
