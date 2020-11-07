#include "task2.h"
template <typename T>
T gen()
{
    static int t = 7;
    return t+=13;
}
int main() {

    const size_t size = 16;
    double *array;
    array = createArr<double , size>(gen);
    for (size_t i = 0; i < size; i++) {
        cout << array[i] << endl;
    }
    return 0;
}