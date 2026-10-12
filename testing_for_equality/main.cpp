#include <iostream>


int main()
{
    int num1;
    double double1;
    int equal_result;
    int not_equal_result;

    std::cout << "Enter an integer and a double seperated by a space" << std::endl;
    std::cin >> num1 >> double1;
    equal_result = (num1 == double1);
    not_equal_result = (num1 != double1);

    std::cout << "Equal Results is : " << equal_result << std::endl;
    std::cout << "Not Equal Results is : " << not_equal_result << std::endl;

}