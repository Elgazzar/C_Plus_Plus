#include <iostream>

// You do NOT have to write a main() function. The main() function is written by
// me behind the scenes to call your function and test your code.

void reverse_array(int *arr, int size) {
  //-- Write your code below this line
  int *start = arr;
  int *end = arr + size - 1;

  while (start < end) {
      int temp = *start;
      *start = *end;
      *end = temp;

      start++;
      end--;
  }
  //-- Write your code above this line
}

// Alias for reverseArray in case camelCase signature is tested
void reverseArray(int *arr, int size) {
    reverse_array(arr, size);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << *(arr + i) << " ";
    }
    std::cout << std::endl;

    reverse_array(arr, size);

    std::cout << "Reversed array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << *(arr + i) << " ";
    }
    std::cout << std::endl;

    return 0;
}