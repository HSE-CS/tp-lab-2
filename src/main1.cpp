#include <iostream>
#include <cstring>
#include "../include/task1.h"

int main() {
    const size_t n = 6;
	char* val[n]{(char*)"ffff", (char*)"fff2", (char*)"f", (char*)"ff", (char*)"vvv", (char*)"fffrr"};
	msort(val, 6);
    for(size_t i = 0; i < n; i++)
        std::cout<<val[i]<<" ";
    return 0;
}