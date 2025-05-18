#include <iostream>
#include <string.h>

/*C++ Style string functions */
std::string str {"Elgazzar"};


int main ()
{
    std::string s1;
    std::string s2;
    std::string sentence;
    s1 = "C++ Rocks!";
    s2 = s1;

    sentence = s1 + s2;
    std::cout << s1 << std::endl;
    std::cout << s2 << std::endl;
    std::cout << s1.size() << std::endl;
    std::cout << s2.size() << std::endl;
    std::cout << sentence << std::endl;
    std::cout << "=========================" << std::endl;
    for(int i=0;i<s1.size();i++)
    {
        std::cout << s1.at(i) << std::endl;
    }

    /*you can do == =! < > on C++ string */
    std::string s1_Test {"This is a test"};
    std::cout << s1_Test.substr(0,4); //start end
    std::cout << s1_Test.substr(5,2); // start end
    std::cout << s1_Test.substr(10,4);    // start end

    /*reading a whole line from input stream */
    std::string s_line_String;
    //std::getline(std::cin,s_line_String); //it will stop reading at enter
    std::getline(std::cin,s_line_String,'x'); //end line delimter which is x it will stop reading at x
    std::cout << s_line_String << std::endl;
    return 0;
}