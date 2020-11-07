#include "task3.h"
template <typename T>
T change(T num)
{
    return num-100;
}
int main() {

    const size_t size = 7;
    int* array = new int[size]{1,2,3,4,5,8,7};
    map<int, size>(array, change);

    for (size_t i = 0; i < size; i++) {
        cout << array[i] << endl;
    }
    return 0;
}