#include <stdio.h>

// Function to input a 3x5 matrix
void inputMatrix(int matrix[3][5]) {
    printf("Enter elements of the matrix (3x5):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to display a 3x5 matrix
void showMatrix(int matrix[3][5]) {
    printf("Matrix (3x5):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to perform scalar multiplication on a 3x5 matrix
void scalarMultiply(int matrix[3][5], int scalar) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            matrix[i][j] *= scalar;
        }
    }
}

int main() {
    int matrix[3][5];
    int scalar;

    // Input matrix
    inputMatrix(matrix);

    // Display matrix
    showMatrix(matrix);

    // Input scalar for multiplication
    printf("Enter scalar for multiplication: ");
    scanf("%d", &scalar);

    // Perform scalar multiplication
    scalarMultiply(matrix, scalar);

    // Display updated matrix after scalar multiplication
    printf("Matrix after scalar multiplication:\n");
    showMatrix(matrix);

    return 0;
}

