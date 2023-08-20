// https://leetcode.com/problems/faulty-keyboard/

#include <iostream>
#include <algorithm>


std::string reverseString(std::string s){

    // ******My Solution***********

    // std::string newString = "";
    // int count = 1;
    // for(int i = 0; i < s.length(); i++){
    //     std::string reversed = "";
    //     if(s[i] == 'i'){
    //         for(int j = i - count; j >= 0; j--){
    //             reversed += newString[j];
    //         }
    //         newString = reversed;
    //         count++;
    //     }else{
    //         newString += s[i];
    //     }
    // }
    // return newString;

    // ******** Better Solution  *************
    //  std::string ans;
    //     for(char c : s)
    //     {
    //         if(c=='i') {
    //            std::reverse(ans.begin(),ans.end()); 
    //            std::cout<<ans<<'\n';
    //         } 
    //         else ans+=c;
    //     }
    //     return ans;


    // ********* My experiment *********
    // std::reverse(s.begin(), s.end());
    // std::cout<<s;
 
}

int main(){
    std::cout<<reverseString("swayam");
    return 0;
}