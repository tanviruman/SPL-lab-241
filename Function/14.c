#include <stdio.h>

// Function to determine and print even numbers in an array
void printEvenNumbers(int arr[], int size) {
    printf("Even numbers in the array: ");
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main() {
    int n;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int numbers[n];

    // Input the elements of the array
    printf("Enter %d integers for the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    // Call the function to print even numbers
    printEvenNumbers(numbers, n);

    return 0;
}

