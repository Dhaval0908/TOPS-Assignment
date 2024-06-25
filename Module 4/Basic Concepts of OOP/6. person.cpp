//Write a C++ program to create a class called Person that has private
//member variables for name, age and country. Implement member
//functions to set and get the values of these variables.

#include <iostream>
#include <string>
using namespace std;

// Define the Person class
class Person {
private:
    // Private member variables for name, age, and country
    string name;
    int age;
    string country;

public:
    // Function to set the name
    void setName(string n) {
        name = n;
    }

    // Function to get the name
    string getName() {
        return name;
    }

    // Function to set the age
    void setAge(int a) {
        age = a;
    }

    // Function to get the age
    int getAge() {
        return age;
    }

    // Function to set the country
    void setCountry(string c) {
        country = c;
    }

    // Function to get the country
    string getCountry() {
        return country;
    }
};

int main() {
    // Create an instance of Person
    Person p;

    string personName, personCountry;
    int personAge;

    // Get name from the user
    cout << "Enter the name: ";
    getline(cin, personName);

    // Get age from the user
    cout << "Enter the age: ";
    cin >> personAge;
    cin.ignore(); // Ignore the newline character left in the input buffer

    // Get country from the user
    cout << "Enter the country: ";
    getline(cin, personCountry);

    // Set values for the person
    p.setName(personName);
    p.setAge(personAge);
    p.setCountry(personCountry);

    // Display the values
    cout << "Name: " << p.getName() << endl;
    cout << "Age: " << p.getAge() << endl;
    cout << "Country: " << p.getCountry() << endl;

    return 0;
}
