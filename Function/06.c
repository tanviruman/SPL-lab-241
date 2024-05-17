#include <stdio.h>

// Function to calculate the sum of n numbers
int calculateSum(int n) {
    int sum = 0;
    int num;

    printf("Enter %d numbers:\n", n);

    for (int i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        sum += num;
    }
    printf("Sum in function: %d\n",sum);
    return sum;
}

int main() {
    int count;

    // Input the number of values to sum
    printf("Enter the number of values to sum: ");
    scanf("%d", &count);

    // Call the function to calculate the sum
    int result = calculateSum(count);

    // Display the result
    printf("The sum of %d numbers is: %d\n", count, result);

    return 0;
}

