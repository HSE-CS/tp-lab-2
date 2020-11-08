#include <iostream>
#include "task1.h"

using namespace std;

int main(){
    
    const size_t n = 6;
    char* val[n]{(char*)"ffff", (char*)"fff2", (char*)"f", (char*)"ff", (char*)"vvv", (char*)"fffrr"};
    msort(val, n);
    return 0;
}
