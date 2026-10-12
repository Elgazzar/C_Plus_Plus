#include <iostream>
#include <string>

using namespace std;

int main() {
    string letters;
    cout << "Enter a string of letters to create a Letter Pyramid: ";
    getline(cin, letters);

    size_t num_letters = letters.length();

    for (size_t i = 0; i < num_letters; ++i) {
        // 1. Calculate and print leading spaces
        size_t num_spaces = num_letters - i - 1;
        for (size_t j = 0; j < num_spaces; ++j) {
            cout << " ";
        }

        // 2. Print characters in ascending order (up to the current row index)
        for (size_t j = 0; j <= i; ++j) {
            cout << letters.at(j);
        }

        // 3. Print characters in descending order (starting from the previous row index)
        // We use a signed integer to avoid underflow, or carefully check bounds
        for (int j = i - 1; j >= 0; --j) {
            cout << letters.at(j);
        }

        // 4. Print newline at the end of the row
        cout << endl;
    }

    return 0;
}
