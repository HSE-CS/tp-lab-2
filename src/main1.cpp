#include "task1.h"



int main(){

    const size_t n = 5;
    int *a = new int[n]{10,21,2142,1,12};

    cout << "The array before msort:" << endl;
    printArr(a, n);

    msort(a, n);

    cout << "The array after msort:" << endl;
    printArr(a, 5);

    char **ss = new char *[n]{"дт_ывд", "йцу", "", "йцу", ""};
    cout << "\nThe array before msort:" << endl;
    printArr(ss, n);

    msort(ss, n);

    cout << "The array after msort:" << endl;
    printArr(ss, 5);

    return 0;
}