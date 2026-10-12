#include <iostream>
#include <string>

using namespace std;

class SubstitutionCipher {
private:
    // We include both lower and upper case letters to handle case sensitivity
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string secret_alphabet {"qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM"};

public:
    // Encrypts the provided string
    string encrypt(const string& message) {
        string encrypted_message {};
        for (char c : message) {
            size_t position = alphabet.find(c);
            if (position != string::npos) {
                // If the character is in the alphabet, swap it with the secret character
                encrypted_message += secret_alphabet.at(position);
            } else {
                // If it's not a letter (e.g., spaces, numbers, punctuation), leave it as is
                encrypted_message += c;
            }
        }
        return encrypted_message;
    }

    // Decrypts the provided string
    string decrypt(const string& encrypted_message) {
        string decrypted_message {};
        for (char c : encrypted_message) {
            size_t position = secret_alphabet.find(c);
            if (position != string::npos) {
                // If the character is in the secret alphabet, swap it back to original
                decrypted_message += alphabet.at(position);
            } else {
                // If it's not a letter, leave it as is
                decrypted_message += c;
            }
        }
        return decrypted_message;
    }
};

int main() {
    SubstitutionCipher cipher;

    // Example 1
    string message1 {"Hello World!"};
    cout << "--- Example 1 ---" << endl;
    cout << "Original: " << message1 << endl;
    
    string encrypted1 = cipher.encrypt(message1);
    cout << "Encrypted: " << encrypted1 << endl;
    
    string decrypted1 = cipher.decrypt(encrypted1);
    cout << "Decrypted: " << decrypted1 << endl << endl;


    // Example 2
    string message2 {"C++ Programming is 100% Fun."};
    cout << "--- Example 2 ---" << endl;
    cout << "Original: " << message2 << endl;
    
    string encrypted2 = cipher.encrypt(message2);
    cout << "Encrypted: " << encrypted2 << endl;
    
    string decrypted2 = cipher.decrypt(encrypted2);
    cout << "Decrypted: " << decrypted2 << endl;

    return 0;
}
