#include <iostream>
#include <vector>
#include <string.h>

/*declare a pointer */
int *p;

int *int_ptr{nullptr};
int *array_ptr {nullptr};
double *temp_ptr{nullptr};

int main()
{
    /*allocate memory for int*/
    int size;
    int_ptr = new int;
    array_ptr = new int[100];
    /*Print the address for the new int*/
    std::cout << int_ptr << std::endl; //address
    std::cout << *int_ptr << std::endl; //Garbage

    *int_ptr = 100;
    std::cout << *int_ptr << std::endl; //100
    delete[] array_ptr; /*free the allocated space*/

    std::cin >> size;
    // while(true)
    // {
    //     temp_ptr = new double[size];
    // }
    return 0;

}