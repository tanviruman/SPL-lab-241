#include <stdio.h>

// Function to find and return the minimum value in an array
int findMinValue(int arr[], int size) {
    if (size <= 0) {
        // Handle the case of an empty array or invalid size
        printf("Invalid array size\n");
        return -1; // Return a placeholder value indicating an error
    }

    int min = arr[0]; // Assume the first element is the minimum

    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i]; // Update the minimum if a smaller element is found
        }
    }

    return min; // Return the minimum value
}

int main() {
    int n;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        // Handle the case of an empty array or invalid size
        printf("Invalid array size\n");
        return 1; // Return an error code
    }

    int numbers[n];

    // Input the elements of the array
    printf("Enter %d integers for the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    // Call the function to find the minimum value
    int minValue = findMinValue(numbers, n);

    if (minValue != -1) {
        printf("The minimum value in the array is: %d\n", minValue);
    }

    return 0;
}

