#include <iostream>

int main()
{
    int total{};
    int num1{}, num2{}, num3{};
    const int count {3};

    std::cout << "Enter 3 integers" << std::endl;
    std::cin >> num1 >> num2 >> num3;

    total = num1 + num2 + num3;

    double average {0.0};

    average = static_cast<double> (total) / count;
    //average = (double) total / count; //this is old C-Style of casting


    std::cout << "ther 3 numbers are : " << num1 << num2 << num3 << std::endl;
    std::cout << "the average is: " << average << std::endl;
}