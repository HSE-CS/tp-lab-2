#include "task1.h"

int main() {
    const size_t n = 6;
    char* val[n]{(char*)"ffff", (char*)"fff2", (char*)"f", (char*)"ff", (char*)"vvv", (char*)"fffrr"};
    msort(val, n);
    for(auto & i : val) {
        printf("%s ", i);
    }
    return 0;
}