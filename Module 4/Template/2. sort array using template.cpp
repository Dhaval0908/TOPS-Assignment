//Write a program of to sort the array using templates

#include <iostream>
#include <string>
#include <algorithm> // For std::sort
using namespace std;

// Template function to print the array
template <typename T>
void printArray(T arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Template function to input array elements
template <typename T>
void inputArray(T arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
}

int main() {
    int n;

    // Integer array
    cout << "Enter the number of integer elements: ";
    cin >> n;
    int* intArr = new int[n];
    cout << "Enter integer elements:\n";
    inputArray(intArr, n);
    cout << "Unsorted integer array: ";
    printArray(intArr, n);
    sort(intArr, intArr + n);
    cout << "Sorted integer array: ";
    printArray(intArr, n);
    delete[] intArr;

    // Float array
    cout << "\nEnter the number of float elements: ";
    cin >> n;
    float* floatArr = new float[n];
    cout << "Enter float elements:\n";
    inputArray(floatArr, n);
    cout << "Unsorted float array: ";
    printArray(floatArr, n);
    sort(floatArr, floatArr + n);
    cout << "Sorted float array: ";
    printArray(floatArr, n);
    delete[] floatArr;

    // String array
    cout << "\nEnter the number of string elements: ";
    cin >> n;
    cin.ignore(); // Clear the newline from the input buffer
    string* strArr = new string[n];
    cout << "Enter string elements:\n";
    inputArray(strArr, n);
    cout << "Unsorted string array: ";
    printArray(strArr, n);
    sort(strArr, strArr + n);
    cout << "Sorted string array: ";
    printArray(strArr, n);
    delete[] strArr;

    return 0;
}

