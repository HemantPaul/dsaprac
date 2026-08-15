/* You have an array of numbers.
Find the biggest number in the array.
Find the position (index) of that biggest number.
Print the biggest number on the first line.
Print its index on the second line.
 */

#include <stdio.h>

void MaxInArray(int arr[], int length)
{
    int big = arr[0];
    int index = 0;

    for (int i = 1; i < length; i++)
    {
        if (arr[i] > big)
        {
            big = arr[i];
            index = i;
        }
    }

    printf("%d\n", big);
    printf("%d\n", index);
}

int main()
{
    int arr[] = {23, 45, 82, 27, 66, 12, 78, 13, 71, 86};

    MaxInArray(arr, 10);

    return 0;
}