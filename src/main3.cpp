#include "task3.h"

int main()
{
    const size_t arraySize = 10;
    int array[arraySize] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    map<int, arraySize>(array, changeMod2);
    for (size_t i = 0; i < arraySize; i++)
        std::cout << array[i] << " ";
    std::cout << std::endl;
    return 0;
}