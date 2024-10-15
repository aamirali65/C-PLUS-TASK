#include <iostream>
using namespace std;

int main() {
    double fahrenheit;

    // Input for temperature in Fahrenheit
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;

    // Convert to Celsius
    double celsius = (5.0 / 9.0) * (fahrenheit - 32);
    cout << "Temperature in Celsius: " << celsius << " °C" << endl;

    return 0;
}
