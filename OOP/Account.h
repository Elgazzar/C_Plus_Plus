#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include <string>

class Account{
    private:
    std::string name;
    double balance;

    public:
    Account();
    Account(std::string name_val,double balance_val);
    Account(std::string name_val);
    Account(double balance_val);
    //destractor
    ~Account();

};


#endif