#include <iostream>

/* :: is scope resolution meaning you are using cout from std library */

/* << this is the insertation operator */
/* >> this is the extraction operator */
/*inseration and extraction can be used by files*/

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int favourite_number;
    std::cout << "Enter your favourite number ?" << std::endl;

    std::cin >> favourite_number;

    std::cout << "Amazing, my favourite numver is " << favourite_number << std::endl;

    return 0;
}