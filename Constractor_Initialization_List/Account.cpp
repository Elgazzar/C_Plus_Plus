#include "Account.h"

Account::Account() : name{"None"}, balance {0}
{

}
/*Instructir order is not the order here , order is from the clase itself*/
Account::Account(std::string name_val,double balance_val) : name {name_val} , balance {balance_val}
{

}
Account::Account(std::string name_val) : name{name_val} , balance{0}
{

}
Account::Account(double balance_val) : name{"None"}, balance{balance_val}
{

}
Account::~Account()
{

}