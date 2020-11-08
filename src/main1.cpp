#include <iostream>
#include "task1.h"

int main() {
    const size_t n = 7;
  
    int *initial = new int[n]{4, 2, 3, 5, 1, 6, 2};
    msort(initial, n);
    
    
    for (int i = 0; i < n; i++)
        std::cout << initial[i] << " ";
        
    return 0;
}
