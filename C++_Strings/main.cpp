#include <iostream>
#include <string>

std::string s1;
std::string s2 {"Frank"};
std::string s3 {s2};
std::string s4 {"Frank",3};
std::string s5 {s3,0,2};
std::string s6 (3,'x');

std::string sentence;


int main()
{

    /*Assignments*/
    s1 = "C++ Rocks!";
    s2 = s1;

    sentence = s2 + s3;
    //sentence = "C++" + "is powerful"; //Illegal you can't concatnate two strings it only works with C++ strings
    
    
    std::cout << "This is C++ Strings" << std::endl;
    std::cout << sentence << std::endl;

    //Accessing characters[] and using at() at does cheking to the ends
    std::cout << s2[0] << std::endl;
    std::cout << s2.at(0) << std::endl;

    for(auto c:s2)
    {
        std::cout << c << std::endl;
    }

}