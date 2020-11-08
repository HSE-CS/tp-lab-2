//
// Created by Алексей Трутнев on 07.11.2020.
//

#include<iostream>
#include "task1.h"

int main() {

    int a[]{ 3, 1, 5, 13, 4, 2, 56, 865};
    msort(a, 8);
    for (auto i : a)
        std::cout << i << " ";
    std::cout << "\n";

    double b[]{ 3.1, 1.9, 5., 13., 4., 1.2 };
    msort(b, 6);
    for (auto i : b)
        std::cout << i << " ";
    std::cout << "\n";

    char* c[6]{ (char*)"kehjvbk", (char*)"kagkjvjk", (char*)"kyfy", (char*)"ee", (char*)"kkyfukvcrsk", (char*)"au;oioiy6r" };
    msort(c, 6);
    for (auto i : c)
        std::cout << i <<" ";

    return 0;
}