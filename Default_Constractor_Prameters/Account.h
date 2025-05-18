#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include <string>

class Account{
    public:
    std::string name;
    double balance;

    public:
    Account(std::string name_val = "None",double balance_val = 0);
    //destractor
    ~Account();

};


#endif