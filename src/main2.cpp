#include "task2.h"

int main()
{
    const size_t arraySize = 10;
    int *array = createArr<int, arraySize>(gen);
    for (size_t i = 0; i < arraySize; i++)
        std::cout << array[i] << " ";
    std::cout << std::endl;
    return 0;
}