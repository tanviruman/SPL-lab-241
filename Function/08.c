#include <stdio.h>

// Function to print an array of n integers in reverse order
void printReverse(int arr[], int n) {
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int count;

    // Input the number of values
    printf("Enter the number of values: ");
    scanf("%d", &count);

    // Declare an array to store the numbers
    int numbers[count];

    // Input the numbers into the array
    printf("Enter %d numbers:\n", count);
    for (int i = 0; i < count; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Call the function to print the array in reverse order
    printf("Array in reverse order: ");
    printReverse(numbers, count);

    return 0;
}


