//Write a C++ program to create a class called Rectangle that has private
//member variables for length and width. Implement member functions to
//calculate the rectangle's area and perimeter.

#include <iostream>
using namespace std;

// Define the Rectangle class
class Rectangle {
private:
    // Private member variables for length and width
    double length;
    double width;

public:
    // Constructor to initialize length and width
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    // Function to calculate the area
    double getArea() {
        return length * width;
    }

    // Function to calculate the perimeter
    double getPerimeter() {
        return 2 * (length + width);
    }
};

int main() {
    double length, width;

    // Get length and width from the user
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    // Create an instance of Rectangle with user-provided values
    Rectangle r1(length, width);

    // Display the area and perimeter
    cout << "Area: " << r1.getArea() << endl;
    cout << "Perimeter: " << r1.getPerimeter() << endl;

    return 0;
}

