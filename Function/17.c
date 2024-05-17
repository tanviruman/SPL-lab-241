#include <stdio.h>

// Function to perform bubble sort on an array in ascending order
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap if the current element is greater than the next
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
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

    // Call the function to perform bubble sort
    bubbleSort(numbers, n);

    // Display the sorted array
    printf("Sorted array in ascending order:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}
