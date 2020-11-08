#include "task1.h"

int main()
{
    const size_t arraySize = 10;
    int array[arraySize] = {10, 9, 1, 2, 3, 7, 6, 8, 5, 4};
    msort(array, arraySize);
    for (size_t i = 0; i < arraySize; i++)
        std::cout << array[i] << " ";
    std::cout << std::endl;
    const size_t strArraySize = 3;
    char **strArray = new char *[strArraySize];
    strArray[0] = new char[9]{'P', 'r', 'o', 'v', 'e', 'r', 'k', 'a', '\0'};
    strArray[1] = new char[7]{'R', 'a', 'b', 'o', 't', 'i', '\0'};
    strArray[2] = new char[8]{'P', 'r', 'o', 'g', 'r', 'a', 'm', '\0'};
    msort(strArray, strArraySize);
    for (size_t i = 0; i < strArraySize; i++)
        std::cout << strArray[i] << "  ";
    return 0;
}