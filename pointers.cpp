#include <iostream>

int main(){

    // int *p_number {}; // will initalize null pointer
    // double *p_fractional_number {};

    // // Explicitly initalize with null ptr
    // int *p_number {nullptr};


    // Pointer to diff variables are of same size
    

    // Character Pointer
    // const char *message {"Hello World"};
    
    // for(int i = 0; *message != '\0'; i++){
    //     std::cout<<*message++<<'\n';
    // }

    const char * message {"Hello World!"};
    std::cout << "message : " << *message << std::endl;

    // Pointer to const
    int number3 {632};

    const int* p_number3 {&number3}; // can't modify number3 through p_number3

    // *p_number3 = 444; // Compile Error

    // We can still change where its pointing to
    int number4 {872};
    p_number3 = &number4;

    // const pointer and pointer to const

    return 0;
}