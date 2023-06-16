// Section 6
// Challenge

/* 
    Frank's Carpet Cleaning Service
    Charges:
        $25 per small room
        $35 per large room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of small and large rooms they would like cleaned
    and provide an estimate such as:
     
Estimate for carpet cleaning service
Number of small rooms: 3
Number of large rooms: 1
Price per small room: $25
Price per large room: $35
Cost : $110
Tax: $6.6
===============================
Total estimate: $116.6
This estimate is valid for 30 days
*/

#include <iostream>

using namespace std;

int main() {
    const int price_small_room {25};
    const int price_large_room {35};
    const double tax {0.06};
    const int estimation_expiry {30};
    
    cout << "Hello, welcome to Frank's Carpet Cleaning Service" << endl;
    cout << "\nHow many small rooms would you like cleaned? ";
    int small_rooms {0};
    cin >> small_rooms;
    cout << "How many large rooms would you like cleaned? ";
    int large_rooms {0};
    cin >> large_rooms;
    
    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << small_rooms << endl;
    cout << "Number of large rooms: " << large_rooms << endl;
    cout << "Price per small room: $" << price_small_room << endl;
    cout << "Price per large room: $" << price_large_room << endl;
    int subtotal {(price_small_room * small_rooms) + (price_large_room * large_rooms)};
    cout << "Cost: $" << subtotal << endl;
    double calculated_tax {subtotal * tax};
    cout << "Tax: $" << calculated_tax << endl;
    cout << "===============================" << endl;
    double total {subtotal + calculated_tax};
    cout << "Total Estimate: $" << total << endl;
    cout << "This estimate is valid for " << estimation_expiry << " days." << endl;
    
    cout << endl;
    return 0;
}

