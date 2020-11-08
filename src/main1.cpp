#include "task1.h"

int main() {
    const size_t n = 6;
    int* val = new int[n] {5, 3, 2, 4, 1, 6};
    msort(val, n);
    for (size_t i = 0; i < n; i++) {
        cout << val[i] << " ";
    }
    cout << endl;

    const size_t n1 = 6;
    double* val1 = new double[n] {4.0, 3.0, 2.4, 2.5, 2.1, -1};
    msort(val1, n1);
    for (size_t i = 0; i < n; i++) {
        cout << val1[i] << " ";
    }
    cout << endl;

    const size_t n2 = 6;
    char* val2[n2]{ (char*)"ffff", (char*)"fff2", (char*)"f", (char*)"ff", (char*)"vvv", (char*)"fffrr" };
    msort(val2, n2);
    for (size_t i = 0; i < n2; i++) {
        std::cout << val2[i] << " ";
    }
    return 0;
}