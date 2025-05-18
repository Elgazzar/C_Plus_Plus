#include <iostream>

/*Pass by referance example, Swap two numbers*/
void swap(int &a, int &b);

int main ()
{
    /*Define the numbers*/
    int first_number = 0;
    int second_number = 1;
    /*Print the two numbers*/
    std::cout << "First number is : " << first_number << std::endl;
    std::cout << "second number is : " << second_number<< std::endl;
    swap (first_number,second_number);
    std::cout << "First number is : " << first_number << std::endl;
    std::cout << "second number is : " << second_number<< std::endl;
   return 0;
}

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}