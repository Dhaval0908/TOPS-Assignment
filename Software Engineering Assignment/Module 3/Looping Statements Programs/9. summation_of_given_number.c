//Write a program make a summation of given number (E.g., 1523 Ans: -11)

#include <stdio.h>

int main() {
    int num, sum = 0, digit;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle negative numbers by converting to positive
    if (num < 0) {
        num = -num;
    }

    // Iterate through each digit of the number
    while (num > 0) {
        digit = num % 10; // Get the last digit
        sum += digit;     // Add it to the sum
        num = num / 10;   // Remove the last digit
    }

    printf("Summation of digits is: %d\n", sum);

    return 0;
}

