#include <iostream>

void display_day(int day_code) {
    //----WRITE YOUR CODE BELOW THIS LINE----
    switch (day_code) {
        case 0:
            std::cout << "Sunday";
            break;
        case 1:
            std::cout << "Monday";
            break;
        case 2:
            std::cout << "Tuesday";
            break;
        case 3:
            std::cout << "Wednesday";
            break;
        case 4:
            std::cout << "Thursday";
            break;
        case 5:
            std::cout << "Friday";
            break;
        case 6:
            std::cout << "Saturday";
            break;
        default:
            std::cout << "Error - illegal day code";
    }
    //----WRITE YOUR CODE ABOVE THIS LINE----
}

int main() {
    display_day(0);
    std::cout << std::endl;
    display_day(3);
    std::cout << std::endl;
    display_day(7);
    std::cout << std::endl;
    return 0;
}

