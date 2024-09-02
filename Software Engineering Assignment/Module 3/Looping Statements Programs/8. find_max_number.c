//Write a program to find out the max from given number (E.g., No: -1562 Max number is 6)

#include <stdio.h>

int main() {
    int num, maxDigit = 0, digit;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle negative numbers by converting to positive
    if (num < 0) {
        num = -num;
    }

    // Iterate through each digit of the number
    while (num > 0) {
        digit = num % 10; // Get the last digit
        if (digit > maxDigit) {
            maxDigit = digit; // Update maxDigit if current digit is greater
        }
        num = num / 10; // Remove the last digit
    }

    printf("Max digit is: %d\n", maxDigit);

    return 0;
}

