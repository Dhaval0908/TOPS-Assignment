//Write a C++ Program to show access to Private Public and Protected using
//Inheritance

#include <iostream>
using namespace std;

class A {
protected:
    string name;

public:
    A() {
        cout << "Enter Your Name: ";
        cin >> name;
    }
};

class B : public A {
protected:
    int age;

public:
    B() {
        cout << "Enter Your Age: ";
        cin >> age;
    }

    void displayInfo() {
        cout << "\nName: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    B obj;
    obj.displayInfo();
    
    return 0;
}

