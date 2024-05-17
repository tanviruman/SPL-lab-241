#include <stdio.h>

// Function to multiply each element of the array by 2
void multiplyByTwo(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] *= 2; // Multiply each element by 2
    }
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

    // Call the function to multiply each element by 2
    multiplyByTwo(numbers, n);

    // Display the modified array
    printf("Modified array after multiplying each element by 2:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}


