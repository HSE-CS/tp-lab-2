//
// Created by sharg on 03.11.2020.
//

#include "task1.h"

using namespace std;

int main(){
    const size_t size = 5;
    float array[size]{ 2.0, 213.4, 2.0, -1.22, -1.23};
    msort(array,size);
    for (double number : array)
        cout << number << '\t';
    cout<<endl;

    double *array2 = new double [size]{123.23, -123.321, 223.1, 4.323, 1.2323};
    msort(array2, size);
    for(int i=0;i<size;i++)
        cout<<array2[i]<<'\t';
    cout<<endl;
    delete[] array2;

    char* array3[size]{(char*)"Sharunov", (char*)"Evgeny", (char*)"19-pi2", (char*)"Hello", (char*)"World"};
    msort(array3, size);
    for (char* number : array3)
        cout << number << '\t';

    return 0;
}