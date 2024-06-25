//Write a program to concatenate the two strings using Operator Overloading

#include <iostream>
#include <string>
using namespace std;

class MyString {
private:
    string str;

public:
    MyString(string s = "") : str(s) {}

    MyString operator+(const MyString& other) {
        return MyString(this->str + other.str);
    }

    string getString() const {
        return str;
    }
};

int main() {
    string s1, s2;

    cout << "Enter first string: ";
    getline(cin, s1);

    cout << "Enter second string: ";
    getline(cin, s2);

    MyString str1(s1);
    MyString str2(s2);

    MyString result = str1 + str2;

    cout << "Concatenated string: " << result.getString() << endl;

    return 0;
}

