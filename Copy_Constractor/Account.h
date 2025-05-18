#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include <string>

class Account{
    private:
    std::string name;
    double balance;

    public:
    Account(std::string name_val = "None",double balance_val = 0);
    /*Copy Constractor*/
    Account(const Account &source);
    /*Get Name*/
    std::string get_name();
    /*Get Balance*/
    double get_balance();
    //destractor
    ~Account();

};


#endif