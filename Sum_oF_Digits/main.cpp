#include <iostream>
#include <string>
int sum;

int sum_of_digits(int n) {
    // Write your code below this line

    std::cout << "Digits are = " << n << std::endl;
    sum = sum + n%10;
    std::cout << "Sum is  = " << sum << std::endl;
     if(n < 10)
     {
         return n;
     }
     else
     {
         sum_of_digits(n/10);
     }
    return sum;
    
    // Write your code above this line
}

int main()
{

    int result = sum_of_digits(5555);
    std::cout << "The result of 1000 is = " << result << std::endl;
}