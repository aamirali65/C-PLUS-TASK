#include <iostream>
#include <iomanip> // For setprecision
using namespace std;

int main() {
    const double item1 = 12.95;
    const double item2 = 24.95;
    const double item3 = 6.95;
    const double item4 = 14.95;
    const double item5 = 3.95;
    const double salesTaxRate = 0.06;

    // Calculate subtotal
    double subtotal = item1 + item2 + item3 + item4 + item5;
    
    // Calculate sales tax
    double salesTax = subtotal * salesTaxRate;
    
    // Calculate total
    double total = subtotal + salesTax;

    // Display prices and calculations
    cout << fixed << setprecision(2); // Set precision for currency format
    cout << "Price of Item 1: $" << item1 << endl;
    cout << "Price of Item 2: $" << item2 << endl;
    cout << "Price of Item 3: $" << item3 << endl;
    cout << "Price of Item 4: $" << item4 << endl;
    cout << "Price of Item 5: $" << item5 << endl;
    
    cout << "Subtotal: $" << subtotal << endl;
    cout << "Sales Tax (6%): $" << salesTax << endl;
    cout << "Total: $" << total << endl;

    return 0;
}
