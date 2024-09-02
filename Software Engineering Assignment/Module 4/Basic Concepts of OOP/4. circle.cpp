//Write a C++ program to implement a class called Circle that has private
//member variables for radius. Include member functions to calculate the
//circle's area and circumference.

#include <iostream>
using namespace std;

// Define the Circle class
class Circle {
private:
    // Private member variable for radius
    double radius;

public:
    // Constructor to initialize radius
    Circle(double r) {
        radius = r;
    }

    // Function to calculate the area
    double getArea() {
        return 3.14159 * radius * radius;
    }

    // Function to calculate the circumference
    double getCircumference() {
        return 2 * 3.14159 * radius;
    }
};

int main() {
    double radius;

    // Get radius from the user
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Create an instance of Circle with user-provided radius
    Circle c1(radius);

    // Display the area and circumference
    cout << "Area: " << c1.getArea() << endl;
    cout << "Circumference: " << c1.getCircumference() << endl;

    return 0;
}

