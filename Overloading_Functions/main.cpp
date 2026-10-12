#include <iostream>

int add_numbers (int,int);
double add_numbers (double,double);


int main()
{
    std::cout << add_numbers(10,20) << std::endl;

    std::cout << add_numbers(10.5,20.5) << std::endl;

    return 0;
}



int add_numbers (int number1,int number2)
{
    return number1 + number2;
}

double add_numbers (double number1,double number2)
{
    return number1 + number2;
}