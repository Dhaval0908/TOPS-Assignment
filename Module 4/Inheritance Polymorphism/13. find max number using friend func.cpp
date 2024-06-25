//Write a program to find the max number from given two numbers
//using friend function

#include<iostream>
using namespace std;

class max_num {
    int a, b;
    
    public:
        friend void get(max_num&);
};

void get(max_num& obj1) {
    cout << "Enter value of A: ";
    cin >> obj1.a;
    cout << "Enter value of B: ";
    cin >> obj1.b;
    
    if(obj1.a > obj1.b) {
        cout << "A is greater than B";
    } else if (obj1.b > obj1.a) {
        cout << "B is greater than A";
    } else {
        cout << "A is equal to B";
    }
}

int main() {
    max_num obj;
    get(obj);
    
    return 0;
}
