#include <stdio.h>

int main() {
    int n, i;
    int largest;

    // Input: Number of elements in the array
    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    // Check if the number of elements is valid
    if (n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    // Declare an array of size n
    int arr[n];

    // Input: Elements of the array
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input. Please enter an integer.\n");
            return 1;
        }
    }

    // Initialize the largest element with the first element
    largest = arr[0];

    // Iterate through the array to find the largest element
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    // Output: Largest element in the array
    printf("The largest element in the array is %d.\n", largest);

    return 0;
}
