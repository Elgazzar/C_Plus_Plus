#include <iostream>
#include "Account.h"


int main()
{
    Account frank_account;
    frank_account.set_balance(1000);

    std::cout << "Balance is : " << frank_account.get_balance() << std::endl;

    return 0;
}