#include <iostream>
#include <cstring>
#include <cctype>
//#include <string.h>

/*C Style string functions */

int main ()
{
    char str[80];
    strcpy(str,"Hello");
    std::cout << strlen(str) << std::endl;
    return 0;
}