//WAP program to print below output using for loop
//01 02 03 04 05 06 07 08 09 10
//11 12 13 14 15 16 17 18 19 20
//..............
//..............
//41 42 43 44 45 46 47 48 49 50

#include <stdio.h>

int main() {
    int rows = 5; // Number of rows
    int cols = 10; // Number of columns
    int start = 1; // Start value for printing

    int i, j; // Declare loop variables outside the loop

    // Loop through rows
    for (i = 0; i < rows; i++) {
        // Loop through columns
        for (j = 0; j < cols; j++) {
            // Print the current number with leading zero if necessary
            printf("%02d ", start++);
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}


