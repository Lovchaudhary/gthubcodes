#include <iostream>
#include <cmath>
using namespace std;

class Ploymorph {
public:
    // Square
    void area(float side) {
        cout << "Area: " << side * side << endl;
    }

    // Rectangle
    void area(float base, float height) {
        cout << "Area: " << base * height << endl;
    }

    // Triangle
    void area(float base, float height, bool istriangle) {
        cout << "Area: " << 0.5 * base * height << endl;
    }

    // Circle
    void area(float radius, char lov) {
        cout << "Area: " << 3.14 * radius * radius << endl;
    }
};

int main() {
    float radius, side, height, width, base;
    char lov;
    cout << "Enter the following values:" << endl
         << "Base: ";
    cin >> base;

    cout << "Height: ";
    cin >> height;

    cout << "Radius: ";
    cin >> radius;

    cout << "Width: ";
    cin >> width;

    cout << "Side: ";
    cin >> side;

    Ploymorph p1;

    cout << "\nThe area of square with side " << side << " is: ";
    p1.area(side);

    cout << "The area of triangle with base " << base << " and height " << height << " is: ";
    p1.area(base, height, true);

    cout << "The area of circle with radius " << radius << " is: ";
    p1.area(radius, lov);

    cout << "The area of rectangle with base " << base << " and height " << height << " is: ";
    p1.area(base, height);

    cout << "\nProgram is successfully done\n---------------------------\nThank you for your work!" << endl;

    return 0;
}
