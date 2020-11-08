#include "task3.h"
#include <iostream>

using namespace std;

int degree(int a)
{
    return a * a; 
}

int main() {
    const int n = 5;
    int arr[5]{ 1, 2, 3, 4, 5 };
    map<int, n>(arr, degree);
    for (auto now : arr)
        cout << now << " ";
    return 0;
}
