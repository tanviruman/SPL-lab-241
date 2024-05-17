#include <stdio.h>
#include <math.h>

// Function to take input values into an array
void TakeInput(double array[], int num_of_elem) {
    printf("Enter %d elements:\n", num_of_elem);
    for (int i = 0; i < num_of_elem; i++) {
        scanf("%lf", &array[i]);
    }
}

// Function to calculate the mean of an array
double CalcMean(double array[], int num_of_elem) {
    double sum = 0.0;

    for (int i = 0; i < num_of_elem; i++) {
        sum += array[i];
    }

    return sum / num_of_elem;
}

// Function to calculate the standard deviation of an array
double Calc_Std_deviation(double array[], int num_of_elem) {
    double mean = CalcMean(array, num_of_elem);
    double sum_squared_diff = 0.0;

    for (int i = 0; i < num_of_elem; i++) {
        double diff = array[i] - mean;
        sum_squared_diff += diff * diff;
    }

    double variance = sum_squared_diff / num_of_elem;
    double std_deviation = sqrt(variance);

    return std_deviation;
}

int main() {
    int num_of_elem;

    // Input the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &num_of_elem);

    double array[num_of_elem];

    // Call the TakeInput function
    TakeInput(array, num_of_elem);

    // Call the Calc_Std_deviation function
    double std_deviation = Calc_Std_deviation(array, num_of_elem);

    // Output the result
    printf("The standard deviation of the array is: %lf\n", std_deviation);

    return 0;
}

