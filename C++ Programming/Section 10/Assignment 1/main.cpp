/**
 * Section 10 Challenge Assignment 1 - Letter Pyramid
 * @author Bradley Allen
 * Builds a letter pyramid based on user input. Practices C++ string manipulation.
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
    // Get user input
    string input {};
    cin >> input;
    
    // Initialize first layer
    string layer {input};
    string pyramid {};
    int layer_count {0};

    // Build layers
    for (size_t j{layer.length()}; j > 0; --j) {
        // Build layer
        string reversed {};
        for(size_t i{layer.length() - 1}; i > 0; --i) {
            reversed += layer[i-1];
        }
        pyramid.insert(0, reversed);
        pyramid.insert(0, layer);
        for (int space{0}; space < layer_count; ++space) {
            pyramid.insert(0, " ");
        }
        pyramid.insert(0, "\n");
        layer = layer.substr(0, layer.length()-1);
        layer_count++;
    }
    
    // Print completed pyramid
    cout << pyramid << endl;

    return 0;
}
