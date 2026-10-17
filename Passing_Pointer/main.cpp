#include <iostream>

// Function prototype
void multiply_with_pointer(int* ptr, int multiplier);

// Function definition
void multiply_with_pointer(int* ptr, int multiplier) {
    *ptr *= multiplier;
}

int main()
{
    int num {10};
    int multiplier {5};

    std::cout << "Initial value: " << num << std::endl;

    // Passing the memory address of 'num' using the address-of operator (&)
    multiply_with_pointer(&num, multiplier);

    std::cout << "After multiply_with_pointer(&num, " << multiplier << "): " << num << std::endl;

    return 0;
}