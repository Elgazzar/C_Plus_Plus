#include <iostream>

// You do NOT have to write a main() function. The main() function is written by
// me behind the scenes to call your function and test your code.

int find_max_element(int *arr, int size) {
  //-- Write your code below this line
  int max = *arr;

  for (int i = 1; i < size; ++i) {
      if (*(arr + i) > max) {
          max = *(arr + i);
      }
  }

  return max;
  //-- Write your code below this line
}

// Alias for findMaxElement in case camelCase signature is tested
int findMaxElement(int *arr, int size) {
    return find_max_element(arr, size);
}

int main() {
    int arr[] = {12, 45, 67, 23, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    int maxElement = find_max_element(arr, size);

    std::cout << "The maximum element is: " << maxElement << std::endl;

    return 0;
}