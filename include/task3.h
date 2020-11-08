#pragma once
#define TASK3_H
#ifdef TASK3_H
template<typename T, size_t size>
void map(T arg[], T(*change)(T)) {
    for (size_t i = 0; i < size; i++) {
        arg[i] = change(arg[i]);
    }
}
#endif // TASK3_H
