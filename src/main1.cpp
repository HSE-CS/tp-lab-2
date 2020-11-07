#include "task1.h"
#include "iostream"

int main(){
    float a[] = {1.0, -2.0, -0.1, 6.0, 100.10, 0.0};
    int a_len = 6;
    for (int i = 0; i < a_len; ++i) std::cout << a[i] << ' ';
    std::cout << '\n';
    msort(a, a_len);
    for (int i = 0; i < a_len; ++i) std::cout << a[i] << ' ';
    std::cout << '\n';
    
    char *s[] = {
        "Abc",
        "11111",
        "3",
        "Move me",
        "23"
    };
    int s_len = 5;
    for (int i = 0; i < s_len; ++i) std::cout << '\'' << s[i] << "' ";
    std::cout << '\n';
    msort(s, s_len);
    for (int i = 0; i < s_len; ++i) std::cout << '\'' << s[i] << "' ";
    std::cout << '\n';
    return 0;
}