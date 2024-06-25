//Write a program you have to make a summation of first and last Digit. (E.g.,1234 Ans: -5)

#include <stdio.h>

int main() {
    int num, firstDigit, lastDigit;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle negative numbers by converting to positive
    if (num < 0) {
        num = -num;
    }

    // Get the last digit
    lastDigit = num % 10;

    // Get the first digit
    firstDigit = num;
    while (firstDigit >= 10) {
        firstDigit = firstDigit / 10;
    }

    // Calculate the sum of the first and last digit
    int sum = firstDigit + lastDigit;

    printf("Summation of first and last digit is: %d\n", sum);

    return 0;
}


