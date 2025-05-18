#include <iostream>
#include <vector>
#include <string.h>

/*declare a pointer */
int *p;

int *p1{nullptr};
double *p2{nullptr};
unsigned long long *p3{nullptr};
std::vector <std::string> *p4 {nullptr};


int main()
{
    int num{10};

    std::cout << "value of num is :" << num << std::endl;
    std::cout << "size of num is :" << sizeof(num) << std::endl;
    std::cout << "Address of num is :" << &num << std::endl;

    std::cout << "Value of p is : " << p << std::endl;
    std::cout << "Address of p is : " << &p << std::endl;
    std::cout << "size of p is : " << sizeof(p) << std::endl;

    p = nullptr;
    //std::cout << "Value of p is : " << *p << std::endl;
    std::cout << "Address of p is : " << p << std::endl;
    std::cout << "size of p is : " << sizeof(p) << std::endl;

    /*Print Size of different pointer type should all be the same since the pointer is the address of the bus size which should be cpu size 8 bytes >> 64 bit*/
    /*pointer size is different from what it points to , what it points to is used in case we are incrementing the pointer for example */

    std::cout << "size of p1 is : " << sizeof(p1) << std::endl;
    std::cout << "size of p2 is : " << sizeof(p2) << std::endl;
    std::cout << "size of p3 is : " << sizeof(p3) << std::endl;
    std::cout << "size of p4 is : " << sizeof(p4) << std::endl;
}