#include <iostream>
#include <cmath> // For M_PI constant
using namespace std;

int main() {
    double radius, length, width, base, height;

    // Input for Area of Circle
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    double areaCircle = M_PI * radius * radius;
    cout << "Area of Circle: " << areaCircle << endl;

    // Input for Area of Rectangle
    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;
    double areaRectangle = length * width;
    cout << "Area of Rectangle: " << areaRectangle << endl;

    // Input for Area of Triangle
    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;
    double areaTriangle = (base * height) * 0.5;
    cout << "Area of Triangle: " << areaTriangle << endl;

    // Volume of a Sphere
    double volumeSphere = (4.0 / 3.0) * M_PI * pow(radius, 3);
    cout << "Volume of Sphere: " << volumeSphere << endl;

    return 0;
}
