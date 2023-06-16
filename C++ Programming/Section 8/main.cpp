/**
 * Section 8 Challenge Project
 * @author Bradley Allen
 * Uses a collection of integers and allows the user to perform operations on the list.
 * Instructions for the project are included below as well.
 */

/**
 * For this program I will be using US dollars and cents.
 * Write a program that asks the user to enter the following:
 * An integer representing the number of cents 
 * You may assume that the number of cents entered is greater than or equal to zero
 * The program should then display how to provide that change to the user.
 * 
 * In the US:
 *     1 dollar is 100 cents
 *     1 quarter is 25 cents
 *     1 dime is 10 cents
 *     1 nickel is 5 cents, and
 *     1 penny is 1 cent.
 * 
 * Here is a sample run:
 * 
 * Enter an amount in cents :  92
 * 
 * You can provide this change as follows:
 * dollars    : 0
 * quarters : 3
 * dimes     : 1
 * nickels   : 1
 * pennies  : 2
 */
 
#include <iostream>

using namespace std;

int main() {
    // Define currency values
    const int dollar_value {100};
    const int quarter_value {25};
    const int dime_value {10};
    const int nickel_value {5};
    
    // Request input and initialize variables
    cout << "Enter an amount in cents: ";
    int cents {}, dollars {}, quarters {}, dimes {}, nickels {}, pennies {};
    cin >> cents;
    
    // Calculate change
    dollars = cents / dollar_value;
    cents %= dollar_value;
    
    quarters = cents / quarter_value;
    cents %= quarter_value;
    
    dimes = cents / dime_value;
    cents %= dime_value;
    
    nickels = cents / nickel_value;
    cents %= nickel_value;
    
    pennies = cents;
    
    // Display output
    cout << "You can provide this change as follows:" << endl;
    cout << "dollars : " << dollars << endl;
    cout << "quarters : " << quarters << endl;
    cout << "dimes : " << dimes << endl;
    cout << "nickels : " << nickels << endl;
    cout << "pennies : " << pennies;
    cout << endl;
    
    return 0;
}


