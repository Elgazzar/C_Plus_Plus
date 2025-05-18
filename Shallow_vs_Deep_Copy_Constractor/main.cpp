#include <iostream>
#include "Deep.h"

void display_deep(Deep d)
{
    std::cout << d.get_data_value() << std::endl;
}

int main()
{
    Deep obj1 {100};
    display_deep(obj1);
    obj1.set_data_value(1000);

    return 0;
}