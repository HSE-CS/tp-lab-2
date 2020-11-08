#include <iostream>
#include "task1.h"

int main() {
    const size_t n = 7;
  
    int *arr = new int[n]{4, 2, 3, 5, 1, 6, 2};
    msort(arr, n);
    
    
    for (int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
        
    return 0;
}
