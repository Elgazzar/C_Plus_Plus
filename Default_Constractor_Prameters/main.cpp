#include <iostream>
#include "Account.h"

int main()
{
    Account Frank;
    std::cout << "Prinitig constructor with no args" << std::endl;
    std::cout << Frank.name << std::endl;
    std::cout << Frank.balance << std::endl;
    /*Creating new object*/
    Account Mahmoud("Mahmoud",1000);
    std::cout << "Prinitig constructor with string and double args" << std::endl;
    std::cout << Mahmoud.name << std::endl;
    std::cout << Mahmoud.balance << std::endl;
    Account Esraa("Esraa");
    std::cout << "Prinitig constructor with string args" << std::endl;
    std::cout << Esraa.name << std::endl;
    std::cout << Esraa.balance << std::endl;
    return 0;
}