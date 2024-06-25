//Write a C++ Program display Student Mark sheet using Multiple inheritance

#include <iostream>
using namespace std;

class Subject {
protected:
    int html, css, javascript, php, c, cpp;

public:
    Subject() {
        cout << "\n--------------- Marksheet ----------------\n\n";
        cout << "Enter your HTML marks: ";
        cin >> html;

        cout << "Enter your CSS marks: ";
        cin >> css;

        cout << "Enter your JavaScript marks: ";
        cin >> javascript;

        cout << "Enter your PHP marks: ";
        cin >> php;

        cout << "Enter your C marks: ";
        cin >> c;

        cout << "Enter your C++ marks: ";
        cin >> cpp;
    }
};

class Total {
protected:
    int total;
};

class Result : public Subject, public Total {
protected:
    float avg;

public:
    void s_total() {
        total = html + css + javascript + php + c + cpp;
    }

    void average() {
        avg = static_cast<float>(total) * 100 / 600;
    }

    void print() {
        cout << "\nStudent's Total Marks: " << total << "/600" << endl;
        cout << "Student's Percentage: " << avg << "%" << endl;
    }
};

int main() {
    Result obj;

    obj.s_total();
    obj.average();
    obj.print();

    return 0;
}

