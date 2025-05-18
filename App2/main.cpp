#include <iostream>

/* :: is scope resolution meaning you are using cout from std library */
/* << this is the insertation operator */
/* >> this is the extraction operator */
/*inseration and extraction can be used by files*/

using std::cout;
using std::cin;
using std::endl;

/*global variable is availabe to everyone. it is initialzed to 0 by default */
int age {21};
char middle_initial {'J'};


int main()
{

    int age{16};
    std::cout << "Your age  is : " << age << " Years" << std::endl;

    return 0;
}