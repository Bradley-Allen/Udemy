/**
 * Section 9 Challenge Project
 * @author Bradley Allen
 * Uses a collection of integers and allows the user to perform operations on the list.
 * Instructions for the project are included below as well.
 */
 
/**
 * This challenge is about using a collection (list) of integers and allowing the user
 * to select options from a menu to perform operations on the list.
 * Your program should display a menu options to the user as follows:
 * 
 * P - Print numbers
 * A - Add a number
 * M - Display mean of the numbers
 * S - Display the smallest number
 * L - Display the largest number
 * Q - Quit
 * 
 * Enter your choice:
 * 
 * The program should only accept valid choices from the user, both upper and lowercase selections should be allowed.
 * If an illegal choice is made, you should display, "Unknown selection, please try again" and the menu options should be
 * displayed again.
 * 
 * If the user enters 'P' or 'p', you should display all of the elements (ints) in the list.
 * If the list is empty you should display "[] - the list is empty"
 * If the list is not empty then all the list element should be displayed inside square brackets separated by a space. 
 * For example, [ 1 2 3 4 5 ]
 * 
 * If the user enters 'A' or 'a' then you should prompt the user for an integer to add to the list 
 * which you will add to the list and then display it was added. For example, if the user enters 5
 * You should display, "5 added".
 * Duplicate list entries are OK
 * 
 * If the user enters 'M' or 'm'  you should calculate the mean or average of the elements in the list and display it.
 * If the list is empty you should display, "Unable to calculate the mean - no data"
 * 
 * If the user enters 'S' or 's' you should display the smallest element in the list.
 * For example, if the list contains [2 4 5 1],  you should display, "The smallest number is 1"
 * If the list is empty you should display, "Unable to determine the smallest number - list is empty"
 * 
 * If the user enters 'L' or 'l' you should display the largest element in the list
 * For example, if the list contains [2 4 5 1], you should display, "The largest number is 5"
 * If the list is empty you should display, "Unable to determine the largest number - list is empty"
 * 
 * If the user enters 'Q' or 'q' then you should display 'Goodbye" and the program should terminate.
 */
 
#include <iostream>
#include <vector>

using namespace std;

int main() {
    bool keepGoing {true};
    vector<int> vec {};
    
    while (keepGoing) {
        // Display the menu to the user
        cout << endl;
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
        cout << endl;
        cout << "Enter your choice: ";
        
        char menu_choice {};
        cin >> menu_choice;
        
        switch (menu_choice) {
            case 'p':
            case 'P': 
                // Print numbers
                cout << "[";
                if (vec.size() == 0) {
                    cout << "] - the list is empty";
                } else {
                    cout << " ";
                    for (auto num : vec) {
                        cout << num << " ";
                    }
                    cout << "]";
                }
                break;
            case 'a':
            case 'A':
                // Add a number
                cout << "Enter the number to add to the list: ";
                int number_to_add;
                cin >> number_to_add;
                vec.push_back(number_to_add);
                cout << number_to_add << " added" << endl;
                break;
            case 'm':
            case 'M':
                // Display mean of the numbers
                if (vec.size() == 0) {
                    cout << "Unable to calculate the mean - no data" << endl;
                } else {
                    int sum {0}, count {0};
                    double mean {0.0};
                    for (auto num : vec) {
                        sum += num;
                        ++count;
                    }
                    mean = static_cast<double>(sum) / count;
                    cout << "Mean: " << mean << endl;
                }
                break;
            case 's':
            case 'S':
                // Display the smallest number
                if (vec.size() == 0) {
                    cout << "Unable to determine the smallest number - list is empty" << endl;
                } else {
                    int smallestInt {999999};
                    for (int i{0}; i<static_cast<int>(vec.size()); ++i) {
                       if (static_cast<int>(vec.at(i)) < smallestInt) {
                            smallestInt = static_cast<int>(vec.at(i));
                        }
                    }
                    cout << "The smallest number is " << smallestInt << endl;  
                }
                break;
            case 'l':
            case 'L':
                // Display the largest number
                if (vec.size() == 0) {
                    cout << "Unable to determine the largest number - list is empty" << endl;
                } else {
                    int largestInt {-999999};
                    for (int i{0}; i<static_cast<int>(vec.size()); ++i) {
                       if (static_cast<int>(vec.at(i)) > largestInt) {
                            largestInt = static_cast<int>(vec.at(i));
                        }
                    }
                    cout << "The largest number is " << largestInt << endl;  
                }
                break;
            case 'q':
            case 'Q':
                // Quit
                cout << "Goodbye" << endl;
                keepGoing = false;
                break;
            default:
                // Display "Unknown selection, please try again" and show menu again
                cout << "Unknown selection, please try again" << endl;
                break;
        }
    }
    return 0;
}

