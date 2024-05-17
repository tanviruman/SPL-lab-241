#include <stdio.h>

// Function to calculate the sum of n numbers stored in an array
int calculateSum(int arr[], int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    return sum;
}

int main() {
    int count;

    // Input the number of values to sum
    printf("Enter the number of values to sum: ");
    scanf("%d", &count);

    // Declare an array to store the numbers
    int numbers[count];

    // Input the numbers into the array
    printf("Enter %d numbers:\n", count);
    for (int i = 0; i < count; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Call the function to calculate the sum
    int result = calculateSum(numbers, count);

    // Display the result
    printf("The sum of %d numbers is: %d\n", count, result);

    return 0;
}

