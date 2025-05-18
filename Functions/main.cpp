#include <iostream>

/*Passing Arrays to functions */
void print_array( int numbers[], int size);

int my_numbers[] {1,2,3,4,5,6};

int main ()
{
    print_array(my_numbers,6);
   std::cout << my_numbers[0] << std::endl;
   std::cout << my_numbers[1] << std::endl;
   std::cout << my_numbers[2] << std::endl;
   std::cout << my_numbers[3] << std::endl;
   std::cout << my_numbers[4] << std::endl;
   std::cout << my_numbers[5] << std::endl;

   return 0;
}

void print_array(int numbers[],int size)
{
    /*doesn't know how many elements in the array*/
    /*we need to pass in the size*/
    for(int i=0;i<size;i++)
    {
        std::cout << numbers[i] << std::endl;
        numbers[i] = 0;
    }
}