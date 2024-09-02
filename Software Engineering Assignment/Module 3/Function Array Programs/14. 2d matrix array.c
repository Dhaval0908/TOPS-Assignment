//Perform 2D matrix array

#include <stdio.h>

#define ROWS 2
#define COLS 2

int main() {
    int matrix[ROWS][COLS];
    int i, j;

   
    printf("Enter elements for a %dx%d matrix:\n", ROWS, COLS);
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

   
    printf("\nThe 2D matrix is:\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

