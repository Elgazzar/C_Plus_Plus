#include "Account.h"
#include <iostream>

Account::Account() : name{"None"}, balance {0}
{
    std::cout << "no arg Constractor" << std::endl;
}
/*Instructir order is not the order here , order is from the clase itself*/
Account::Account(std::string name_val,double balance_val) : name {name_val} , balance {balance_val}
{
    std::cout << "2 arg Constractor" << std::endl;
}
/*Delegating Constractor to call 2 arg constractor */
Account::Account(std::string name_val) : Account{name_val,0}
{
    std::cout << "1 arg Constractor" << std::endl;
}
/*Delegating Constractor to call 2 arg constractor */
Account::Account(double balance_val) : Account{"None",balance_val}
{
    std::cout << "1 arg Constractor" << std::endl;
}
Account::~Account()
{

}