#include <iostream>
#include <cmath> // For sqrt function
using namespace std;

int main() {
    double a, b, c;
    double discriminant, root1, root2, realPart, imaginaryPart;

    // Taking input for coefficients a, b, and c
    cout << "Enter coefficients a, b, and c: ";
    cin >> a >> b >> c;

    // Calculating the discriminant
    discriminant = b * b - 4 * a * c;

    // Checking the nature of the roots based on the discriminant
    if (discriminant > 0) {
        // Two distinct real roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "The roots are real and distinct." << endl;
        cout << "Root 1: " << root1 << endl;
        cout << "Root 2: " << root2 << endl;
    } else if (discriminant == 0) {
        // One real root (repeated root)
        root1 = -b / (2 * a);
        cout << "The roots are real and equal." << endl;
        cout << "Root: " << root1 << endl;
    } else {
        // Complex roots
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "The roots are complex and imaginary." << endl;
        cout << "Root 1: " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Root 2: " << realPart << " - " << imaginaryPart << "i" << endl;
    }

    return 0;
}
