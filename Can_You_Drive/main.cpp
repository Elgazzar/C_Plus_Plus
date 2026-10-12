#include <iostream>

void can_you_drive(int age, bool has_car) {
  //----WRITE YOUR CODE BELOW THIS LINE----
  if (age >= 16) {
    if (has_car) {
      std::cout << "Yes - you can drive!";
    } else {
      std::cout << "Sorry, you need to buy a car before you can drive!";
    }
  } else {
    std::cout << "Sorry, come back in " << 16 - age
              << " years and be sure you own a car when you come back.";
  }
  //----WRITE YOUR CODE ABOVE THIS LINE----
}

int main() {
  can_you_drive(15, true);
  can_you_drive(16, false);
  can_you_drive(17, true);
  can_you_drive(18, false);
  can_you_drive(19, true);
  can_you_drive(20, false);
}