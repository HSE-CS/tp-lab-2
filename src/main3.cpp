#include "task3.h"

template <typename T>
T change1(T elem)
{
    return elem + 1;
}
int main() {

    const size_t N = 5;
    
    int* array = new int[N] {1, 2, 4, 5, 6};

    map<int, N>(array, change1);
    
    for (size_t i = 0; i < N; i++) {
        std::cout << array[i] << "\n";
    }
    return 0;
}

