//C Program to Reverse a Number Using FOR Loop

#include <stdio.h>

int main() {
    int num, reversedNum = 0, remainder;

    // Input number from user
    printf("Enter an number: ");
    scanf("%d", &num);

    // Reverse the number using a for loop
    for (; num != 0; num /= 10) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
    }

    // Display the reversed number
    printf("Reversed number: %d\n", reversedNum);

    return 0;
}

