#include <iostream>


int array[] {0,1,2};

int main()
{
    std::cout << "first element in the array: " << array[0] << std::endl;
    std::cout << "second element in the array: " << array[1] << std::endl;
    std::cout << "third element in the array: " << array[2] << std::endl;

    std::cout << "The array is located at address: " << array << std::endl;
}