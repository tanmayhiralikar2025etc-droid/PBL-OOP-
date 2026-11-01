#include <iostream>
using namespace std;

// Namespace 1: holds things related to a Circle
namespace Circle {
    const double PI = 3.14;          // Same name "PI" can exist in other namespaces too

    // Function to calculate area of a circle
    double area(double r) {
        return PI * r * r;           // Area = π × r × r
    }
}

// Namespace 2: holds things related to a Square
namespace Square {
    // Function with the SAME name "area" as in Circle
    // This is allowed because it lives in a different namespace
    double area(double side) {
        return side * side;          // Area = side × side
    }
}

int main() {
    double r = 5, side = 4;

    // Use the scope resolution operator (::) to say which namespace
    // the function belongs to
    cout << "Area of Circle : " << Circle::area(r) << endl;
    cout << "Area of Square : " << Square::area(side) << endl;

    // Accessing a variable inside a namespace
    cout << "Value of PI    : " << Circle::PI << endl;

    return 0;
}
