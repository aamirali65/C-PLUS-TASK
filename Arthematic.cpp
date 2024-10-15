#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    // Take input from the user
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    // Perform arithmetic operations
    cout << "Addition: " << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
    cout << "Subtraction: " << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
    cout << "Multiplication: " << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
    if (num2 != 0) {
        cout << "Division: " << num1 << " / " << num2 << " = " << static_cast<double>(num1) / num2 << endl;
    } else {
        cout << "Division by zero is not allowed." << endl;
    }

    return 0;
}
