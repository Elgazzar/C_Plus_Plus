#include <iostream>
// You do NOT have to write a main() function. The main() function is written by
// me behind the scenes to call your function and test your code.
#include <string>

std::string reverse_string(const std::string &str) {
  std::string reversed;
  // Write your code below this line
  if (!str.empty()) {
      const char *start = str.c_str();
      const char *end = str.c_str() + str.length() - 1;

      while (end >= start) {
          reversed.push_back(*end);
          end--;
      }
  }
  // Write your code abocve this line
  return reversed;
}

// Alias for reverseString in case camelCase signature is tested
std::string reverseString(const std::string &str) {
    return reverse_string(str);
}

int main() {
    std::string input = "Hello, World!";
    std::string reversed = reverse_string(input);

    std::cout << "Original string: " << input << std::endl;
    std::cout << "Reversed string: " << reversed << std::endl;

    return 0;
}