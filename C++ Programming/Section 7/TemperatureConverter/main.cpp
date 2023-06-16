/**
 * Temperature Converter
 * @author Bradley Allen
 * Converts between Fahrenheit and Celsius based on user input.
 */
 
#include <iostream>

using namespace std;

int main() {
    int control {0};
    cout << "Select which temperature scale:" << endl;
    cout << "0 = Fahrenheit | 1 = Celsius" << endl;
    cin >> control;
    
    cout << "Enter the temperature: ";
    double temperature, celsius, fahrenheit;
    cin >> temperature;
    
    if (control) {
       // Celcius -> Farenheit
       celsius = temperature;
       fahrenheit = ((celsius * 9) / 5) + 32;
       cout << celsius << " degrees celsius is " << fahrenheit << " degrees fahrenheit." << endl;
    } else {
        // Farenheit -> Celcius
        fahrenheit = temperature;
        celsius = ((fahrenheit - 32) * 5) / 9;
        cout << fahrenheit << " degrees fahrenheit is " << celsius << " degrees celsius." << endl;
    }
    
    return 0;
}