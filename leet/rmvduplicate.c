// remove duplicate from sorted array
#include <stdio.h>

int main()
{
    int arr[] = {1,1,1,2,2,2,3,3,4,5,5,5};

    int size = sizeof(arr) / sizeof(arr[0]);

    int i = 0;
    int j = 1;
    int count = 1;

    while(j < size)
    {
        if(arr[j] == arr[i])
        {
            j++;
        }
        else
        {
            arr[i + 1] = arr[j];
            i++;
            j++;
            count++;
        }
    }

    printf("Unique elements: %d\n", count);

    for(int i = 0; i < count; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}