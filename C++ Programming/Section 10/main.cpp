/**
 * Section 10 Challenge Project
 * @author Bradley Allen
 * Encrypts and decrypts a given string. Practices use of C++ strings.
 */
 
/**
 * A simple and very old method of sending secret messages is the substitution cipher.
 * You might have used this cipher with your friends when you were a kid.
 * Basically, each letter of the alphabet gets replaced by another letter of the alphabet.
 * For example, every 'a' get replaced with an 'X', and every 'b' gets replaced with a 'Z', etc.
 * 
 * Write a program thats ask a user to enter a secret message.
 * 
 * Encrypt this message using the substitution cipher and display the encrypted message.
 * Then decryped the encrypted message back to the original message.
 * 
 * You may use the 2 strings below for  your subsitition.
 * For example, to encrypt you can replace the character at position n in alphabet 
 * with the character at position n in key.
 * 
 * To decrypt you can replace the character at position n in key
 * with the character at position n in alphabet.
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key  {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    
    // Take input from user
    cout << "Enter message: ";
    string input {};
    getline(cin, input);
    cout << endl;
    
    // Encrypt input
    string encrypted_message {};
    for (char c: input) {
        size_t pos = alphabet.find(c);
        if (pos == string::npos) {
            encrypted_message += c;
        } else {
            char encrypted_char {key.at(pos)};
            encrypted_message += encrypted_char;
        }
    }
    
    // Print encrypted message
    cout << "Encrypted message: " + encrypted_message << endl;
    cout << endl;
    
    // Decrypt encryption
    string decrypted_message {};
    for (char c: encrypted_message) {
        size_t pos = key.find(c);
        if (pos == string::npos) {
            decrypted_message += c;
        } else {
            char decrypted_char {alphabet.at(pos)};
            decrypted_message += decrypted_char;
        }
    }
    
    // Print decrypted message
    cout << "Decrypted message: " + decrypted_message << endl;
    
    cout << endl;
    return 0;
}

