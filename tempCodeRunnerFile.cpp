#include <iostream>

int main()
{

    // CPP String Methods

    std::string name = "John .C. Doe";
    std::string name1 = "Magnus .A. Carlson";
    // Length method
    std::cout << name.length() << '\n';

    // Swap method
    std::swap(name, name1);
    std::cout << name << " second name " << name1 << '\n';

    // Size method
    std::cout << size(name) << '\n';

    // resize method ->  If num > size() then, the rest of characters are initialized by the ‘\0’.
    name.resize(20);
    std::cout << name << '\n';

    // find method -> second param is optional denotes the starting point | not found return grabage value
    std::cout << name.find("a", 9) << '\n';

    // push_back -> push passed char to the end of string
    name.push_back('c');
    std::cout << name << '\n';

    // pop_back -> removes the last char from the string
    name1.pop_back();
    std::cout << name1 << '\n';

    // clear -> removes all the elements
    // name1.clear();
    // std::cout << name1 << '\n';

    // compare() ->
    // It returns 0 if str1 is equal to str2. It returns an integer value less than zero if str1 is less than str2.It returns an integer value greater than zero if str1 is greater than str2.
    std::string str = "aqua man";
    std::string str1 = "aqua mann";
    std::cout << str.compare(str1) << '\n';


    // erase() -> used to remove certain part of string
    // std::cout<<name.erase(7)<<'\n';
    // std::cout<<name<<'\n';

    // CPP string iterator functions

    // str.begin() -> needs string::iterator to store the iteration
    std::string::iterator it;
    it = name.begin();
    std::cout<<++*it<<'\n';

    // str.end()
    std::string::iterator it1;
    it1 = name.end();
    std::cout<<it1<<'\n';

    return 0;
}