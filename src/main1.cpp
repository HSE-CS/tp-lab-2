#include "task1.h"


int main (){
    
    const size_t n = 6;
	int *arrayOfInt = new int[n]{5, 3, 2, 4, 1, 6};

    std::cout<<"INT\n";
    for (size_t i =0; i<n; ++i){
        std::cout<<arrayOfInt[i]<<"\t";
    }

    msort<int>(arrayOfInt,n);

    std::cout<<std::endl;
    for (size_t i =0; i<(n); ++i){
        std::cout<<arrayOfInt[i]<<"\t";
    }
    std::cout<<"\nDOUBLE\n";
	double val[n]{4.0, 3.0, 2.4, 2.5, 2.1, -1};
    for (size_t i =0; i<n; ++i){
        std::cout<<val[i]<<"\t";
    }
    std::cout<<std::endl;
    msort<double>(val,n);
    for (size_t i =0; i<n; ++i){
        std::cout<<val[i]<<"\t";
    }
    std::cout<<"\nChar*\n";
    char* val1[n]{(char*)"ffff", (char*)"fff2", (char*)"f", (char*)"ff", (char*)"vvv", (char*)"fffrr"};
    
     for (size_t i =0; i<n; ++i){
        std::cout<<val1[i]<<"\n";
    }
    std::cout<<"=============================\n";
    msort<char*>(val1,n);
    for (size_t i =0; i<n; ++i){
        std::cout<<val1[i]<<"\n";
    }

    // delete[] arrayOfInt;
    // delete[] val;
    // delete[] val1;
    return 0;
}