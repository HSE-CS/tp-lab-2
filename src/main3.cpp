#include "task3.h"

template<typename T>
T change(T a) {

    return a * 2;

}

int main() {
const int size = 5;

    int arr[size]{ 5, 17, 9, 3, 4 };
for (int i = 0; i < size; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;

    map(arr, change);

    for (int i = 0; i < size; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;

    return 0;
}
