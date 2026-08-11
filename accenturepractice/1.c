/* Find the minimum number of houses needed to collect enough food to feed all the rats.

Total food needed = r × unit
Start adding food from the 1st house onward.
Return the house number where enough food is reached.
If arr is null → return -1
If all houses together aren't enough → return 0 */

/* my approach->
 #include<stdio.h>
int main(){
    int r=5;
    int unit=5;
    int arr[] = {1,2,1};
    int totalfood=r*unit;
    int sum=0;
    for(int i=0;i<sizeof(arr) / sizeof(arr[0]);i++){
        sum=sum+arr[i];

        if(sum>=totalfood){
            printf("the house number is %d",i);
            break;
        }
    }
    return 0;
} */

#include <stdio.h>

int calculateHouse(int r, int unit, int arr[], int n)
{
    // If array is null
    if (arr == NULL)
        return -1;

    int totalFood = r * unit;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

      
        if (sum >= totalFood)
            return i + 1; 
    }

   
    return 0;
}

int main()
{
    int r = 7;
    int unit = 2;
    int arr[] = {2, 8, 3, 5, 7, 4, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = calculateHouse(r, unit, arr, n);

    printf("%d\n", result);

    return 0;
}