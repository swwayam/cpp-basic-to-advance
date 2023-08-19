#include <iostream>
#include <cmath>
int main(){
    std::cout<<pow(2,5)<<'\n'; // rase to power 5
    std::cout<<sqrt(36)<<'\n'; // square root of 36 -> 6
    std::cout<<round(4.6)<<'\n'; // follows normal rounding rule
    std::cout<<ceil(4.1)<<'\n'; // rounds up to 5
    std::cout<<floor(4.7)<<'\n'; // rounds down to 4
    std::cout<<fmax(10,20)<<'\n'; // returns the max between two
    std::cout<<fmin(20,11)<<'\n'; // returns the min between two 
    std::cout<<abs(-102)<<'\n'; // converts negative value to positive.
    return 0;
}