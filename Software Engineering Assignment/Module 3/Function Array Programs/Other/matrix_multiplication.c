// matrix multiplication

#include <stdio.h>

// Declare loop variables globally
int i, j, k;

// Function to multiply two matrices
void multiplyMatrices(int firstMatrix[2][2], int secondMatrix[2][2], int resultMatrix[2][2]) {
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            resultMatrix[i][j] = 0;
            for (k = 0; k < 2; k++) {
                resultMatrix[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[2][2]) {
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int firstMatrix[2][2];
    int secondMatrix[2][2];
    int resultMatrix[2][2];

    // Taking input for the first matrix
    printf("Enter elements of the first 2x2 matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &firstMatrix[i][j]);
        }
    }

    // Taking input for the second matrix
    printf("Enter elements of the second 2x2 matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("Enter element b%d%d: ", i + 1, j + 1);
            scanf("%d", &secondMatrix[i][j]);
        }
    }

    // Multiply matrices
    multiplyMatrices(firstMatrix, secondMatrix, resultMatrix);

    // Display the result
    printf("Resultant Matrix:\n");
    displayMatrix(resultMatrix);

    return 0;
}



