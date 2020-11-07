/*
 * @author Stanislav Stoianov
 */

#include <iostream>
#include <vector>
#include <cstdlib>
#include "../include/task1.h"

using namespace std;

int main() {
    vector<int> a;
    a.reserve(1000);
    for (int i = 0; i < 1000; ++i) a.push_back(-50 + rand() % 100);
    msort(a);
    printf("\n%d", Sorting(a));

    vector<int> b;
    b.reserve(1001);
    for (int i = 0; i < 1001; ++i) b.push_back(-50 + rand() % 100);
    msort(b);
    printf("\n%d", Sorting(b));

    vector<int> c;
    c.push_back(2);
    msort(c);
    printf("\n%d", Sorting(c));

    vector<int> d;
    for (int i = 1; i < 6; i++) d.push_back(i);
    msort(d);
    printf("\n%d", Sorting(d));
}