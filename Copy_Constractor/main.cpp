#include <iostream>
#include "Account.h"

/*Display Account*/
void display_Account(Account a);

/*Display Account Object Details*/
void display_Account(Account a)
{
    std::cout << "Name : " << a.get_name() << std::endl;
    std::cout << "Balance : " << a.get_balance() << std::endl;
}

int main()
{
    Account Frank;
    std::cout << "Prinitig constructor with no args" << std::endl;
    display_Account(Frank);
    /*Creating new object*/
    Account Mahmoud("Mahmoud",1000);
    std::cout << "Prinitig constructor with string and double args" << std::endl;
    display_Account(Mahmoud);
    Account Esraa("Esraa");
    std::cout << "Prinitig constructor with string args" << std::endl;
    display_Account(Esraa);
    return 0;
}