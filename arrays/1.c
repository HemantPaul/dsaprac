// 1. Find the Missing Number Given an array of size n-1 containing numbers 
// from 1 to n, find the missing number. (Example: [1, 2, 4, 5] → 3)

#include <stdio.h>

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n - 1];

    printf("Enter %d elements: ", n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }

    int expectedsum = n * (n + 1) / 2;
    int arrsum = 0;

    for (int i = 0; i < n - 1; i++)
    {
        arrsum += arr[i];
    }

    int element = expectedsum - arrsum;

    printf("Missing element is %d\n", element);

    return 0;
}
  