// the squares of each number sorted in non-decreasing order.

#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize)
{
    // Allocate memory for the result
    int* result = malloc(numsSize * sizeof(int));

    // Step 1: Square every element
    for (int i = 0; i < numsSize; i++)
    {
        result[i] = nums[i] * nums[i];
    }

    // Step 2: Bubble sort
    for (int i = 0; i < numsSize - 1; i++)
    {
        for (int j = 0; j < numsSize - i - 1; j++)
        {
            if (result[j] > result[j + 1])
            {
                int temp = result[j];
                result[j] = result[j + 1];
                result[j + 1] = temp;
            }
        }
    }

    // Tell caller how many elements are returned
    *returnSize = numsSize;

    return result;
}

int main()
{
    int nums[] = {-4, -1, 0, 3, 10};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    int returnSize;

    int* result = sortedSquares(nums, numsSize, &returnSize);

    printf("Sorted squares: ");

    for (int i = 0; i < returnSize; i++)
    {
        printf("%d ", result[i]);
    }

    printf("\n");

    // Free the memory allocated by malloc
    free(result);

    return 0;
}