/* Given an integer sum and an array arr, find the two smallest elements in the array.

If their sum ≤ sum, return their product.
If array has fewer than 2 elements, return -1.
If their sum is greater than sum, return 0. */

#include <stdio.h>

int ProductSmallestPair(int sum, int arr[], int n)
{
    // If array has fewer than 2 elements
    if (n < 2)
        return -1;

    // Assume first two elements are smallest
    int smallest = arr[0];
    int secondSmallest = arr[1];

    // Put the smaller one in smallest
    if (secondSmallest < smallest) {
        int temp = smallest;
        smallest = secondSmallest;
        secondSmallest = temp;
    }

    // Find smallest and second smallest
    for (int i = 2; i < n; i++) {

        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < secondSmallest) {
            secondSmallest = arr[i];
        }
    }

    // Check if their sum is <= given sum
    if (smallest + secondSmallest <= sum)
        return smallest * secondSmallest;

    // No valid pair
    return 0;
}

int main()
{
    int arr[] = {9, 8, 3, -7, 3, 9};
    int n = 6;
    int sum = 4;

    int result = ProductSmallestPair(sum, arr, n);

    printf("%d", result);

    return 0;
}