#include "Deep.h"
#include <iostream>

/*Instructir order is not the order here , order is from the clase itself*/
Deep::Deep(int d)
{
    data = new int;
    *data = d;
}

// Deep::Deep(const Deep &source)
// {
//     /*Code to copy constractors */   
//     //Deep Copy , Create new area in heap and then copy the date from previous area to the next area
//     data = new int;
//     *data = *source.data;
//     std::cout << "Copy Constractor Was Called and copied " << *source.data << std::endl;
// }

/*Deep Copy using Delegation*/
Deep::Deep(const Deep &source) : Deep(*source.data)
{
    /*Code to copy constractors */   
    //Deep Copy , Create new area in heap and then copy the date from previous area to the next area
    std::cout << "Copy Constractor Was Called and copied " << *source.data << std::endl;
}
void Deep::set_data_value(int source)
{
    *data = source;
}
int Deep::get_data_value()
{
    return *data;
}
Deep::~Deep()
{
    //Free Storage
    delete data;
    std::cout << "Destractor of Account Class was called for : " << data << std::endl;
}