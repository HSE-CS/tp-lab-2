#include "task2.hpp"

int main(){
    const size_t N = 10;
    srand(time(NULL));
    double* array;
    array = createArr<double, N>(generate);

    for (size_t i = 0; i<N;++i){
        std::cout<<array[i]<<"\t";
    }
    std::cout<<std::endl;

    return 0;
}