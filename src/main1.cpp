#include "task1.h"



int main(){
    const size_t n = 5;
    int *a = new int[n]{10,21,2142,1,12};

    cout << "The array before msort:" << endl;
    printArr(a, n);

    msort(a,0, n);

    cout << "The array after msort:" << endl;
    printArr(a, 5);

    char **ss = new char *[n]{"55555", "4444", "333", "22", "1"};
    cout << "\nThe array before msort:" << endl;
    printArr(ss, n);

    msort(ss,0, n);

    cout << "The array after msort:" << endl;
    printArr(ss, 5);
    return 0;
}