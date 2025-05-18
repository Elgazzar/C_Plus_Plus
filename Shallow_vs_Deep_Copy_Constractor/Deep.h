#ifndef _DEEP_H_
#define _DEEP_H_

#include <string>

class Deep{
    private:
    int *data;

    public:
    Deep(int d);
    /*Copy Constractor*/
    Deep(const Deep &source);
    /*Set Data*/
    void set_data_value(int source);
    int get_data_value();
    //destractor
    ~Deep();

};


#endif