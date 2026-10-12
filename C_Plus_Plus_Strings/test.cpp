#include <iostream>
#include <string>
using namespace std;

void cpp_strings() {
    
    string journal_entry_1 {"Isaac Newton"};
    string journal_entry_2 {"Leibniz"};
    
    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR CODE BELOW THIS LINE----
    
    // 1. Remove the first name "Isaac " (6 characters)
    journal_entry_1.erase(0, 6);
    
    // 2. Sort the entries alphabetically
    if (journal_entry_2 < journal_entry_1) {
        journal_entry_1.swap(journal_entry_2);
    }
    
    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    
    cout << journal_entry_1 << "\n" << journal_entry_2;
}

int main() {
    cpp_strings();
    return 0;
}
