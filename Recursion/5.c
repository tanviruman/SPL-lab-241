#include <stdio.h>

int findLargest(int arr[], int size, int index) {
    if (index == size - 1) {
        return arr[index];
    } else {
        int rest = findLargest(arr, size, index + 1);
        return (arr[index] > rest) ? arr[index] : rest;
    }
}

int main() {
    int arr[] = {12, 45, 78, 23, 56, 89, 34};
    int size = 7;

    printf("The largest element in the array is: %d\n", findLargest(arr, size, 0));

    return 0;
}
