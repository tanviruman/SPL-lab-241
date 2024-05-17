#include <stdio.h>

#define MAX_ROWS 100
#define MAX_COLS 100

// Function to input an M x N matrix
void inputMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols) {
    printf("Enter elements of the matrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to display an M x N matrix
void showMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols) {
    printf("Matrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to perform scalar multiplication on an M x N matrix
void scalarMultiply(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols, int scalar) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] *= scalar;
        }
    }
}

int main() {
    int matrix[MAX_ROWS][MAX_COLS];
    int rows, cols, scalar;

    // Input matrix size
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // Input matrix
    inputMatrix(matrix, rows, cols);

    // Display matrix
    showMatrix(matrix, rows, cols);

    // Input scalar for multiplication
    printf("Enter scalar for multiplication: ");
    scanf("%d", &scalar);

    // Perform scalar multiplication
    scalarMultiply(matrix, rows, cols, scalar);

    // Display updated matrix after scalar multiplication
    printf("Matrix after scalar multiplication:\n");
    showMatrix(matrix, rows, cols);

    return 0;
}

