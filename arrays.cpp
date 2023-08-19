#include <iostream>


int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int arr1[5] = {0}; // to initalize all the empty values as 0
    for (const int &num: arr){
        std::cout<<num<< " "<<'\n';
    }

    for(int &num: arr1){
        std::cout<<"Enter one number: "<<'\n';
        std::cin>>num;
    }

    for (const int &num: arr1){
        std::cout<<num<< " "<<'\n';
    }

    return 0;
}

