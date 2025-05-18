#include "Account.h"
#include <iostream>

/*Instructir order is not the order here , order is from the clase itself*/
Account::Account(std::string name_val ,double balance_val) : name {name_val} , balance {balance_val}
{
    std::cout << "2 arg Constractor" << std::endl;
}
Account::~Account()
{

}