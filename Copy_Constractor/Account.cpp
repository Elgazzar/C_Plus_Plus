#include "Account.h"
#include <iostream>

/*Instructir order is not the order here , order is from the clase itself*/
Account::Account(std::string name_val ,double balance_val) : name {name_val} , balance {balance_val}
{
    std::cout << "2 arg Constractor" << std::endl;
}

/*Shallow Copy using constractor initilailzation list*/
// Account::Account(const Account &source) : name{source.name},balance{source.balance}
// {
//     /*Code to copy constractors */   
//     std::cout << "Copy Constractor Was Called and copied " << source.name << " and " << source.balance <<  " from source" << std::endl;
// }
/*Shallow Copy using Delegation to constractor*/
Account::Account(const Account &source) : Account{source.name,source.balance}
{
    /*Code to copy constractors */   
    std::cout << "Copy Constractor Was Called and copied " << source.name << " and " << source.balance <<  " from source" << std::endl;
}

/*Get Name*/
std::string Account::get_name()
{
    return name;
}
double Account::get_balance()
{
    return balance;
}
Account::~Account()
{
    std::cout << "Destractor of Account Class was called for : " << name << std::endl;
}