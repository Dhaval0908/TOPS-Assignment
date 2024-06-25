//Write a Program of Two 1D Matrix Addition using Operator Overloading

#include <iostream>
using namespace std;

class Matrix {
private:
    int size;
    int *arr;

public:
    // Constructor
    Matrix(int s) : size(s) {
        arr = new int[size];
    }

    // Destructor
    ~Matrix() {
        delete[] arr;
    }

    // Function to input matrix elements
    void input() {
        cout << "Enter " << size << " elements: ";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    // Function to display matrix elements
    void display() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Overloading + operator
    Matrix operator+(Matrix& other) {
        Matrix result(size);
        for (int i = 0; i < size; i++) {
            result.arr[i] = this->arr[i] + other.arr[i];
        }
        return result;
    }
};

int main() {
    int size;
    cout << "Enter the size of the matrices: ";
    cin >> size;

    Matrix m1(size);
    Matrix m2(size);

    cout << "\nFor first matrix:" << endl;
    m1.input();

    cout << "\nFor second matrix:" << endl;
    m2.input();

    cout << "\nFirst Matrix: ";
    m1.display();

    cout << "Second Matrix: ";
    m2.display();

    Matrix m3 = m1 + m2;

    cout << "\nResult of Addition: ";
    m3.display();

    return 0;
}
