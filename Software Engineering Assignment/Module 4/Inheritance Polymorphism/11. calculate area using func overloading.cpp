//Write a program to calculate the area of circle, rectangle and triangle
//using Function Overloading
//Rectangle: Area * breadth
//Triangle: ½ *Area* breadth
//Circle: Pi * Area *Area

#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate area of a circle
double area(double radius) {
    const double PI = 3.14159;
    return PI * radius * radius;
}

// Function to calculate area of a rectangle
double area(double length, double breadth) {
    return length * breadth;
}

// Function to calculate area of a triangle
double area(double base, double height, char) {
    return 0.5 * base * height;
}

int main() {
    double radius, length, breadth, base, height;
    char choice;

    cout << "Calculate Area of:" << endl;
    cout << "1. Circle" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Triangle" << endl;
    cout << "Enter your choice (1/2/3): ";
    cin >> choice;

    switch(choice) {
        case '1':
            cout << "Enter radius of the circle: ";
            cin >> radius;
            cout << "Area of the circle: " << area(radius) << endl;
            break;
        case '2':
            cout << "Enter length of the rectangle: ";
            cin >> length;
            cout << "Enter breadth of the rectangle: ";
            cin >> breadth;
            cout << "Area of the rectangle: " << area(length, breadth) << endl;
            break;
        case '3':
            cout << "Enter base of the triangle: ";
            cin >> base;
            cout << "Enter height of the triangle: ";
            cin >> height;
            cout << "Area of the triangle: " << area(base, height, 't') << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
