#include <stdio.h>

int main()
{
    int arr[] = {10,20,30,40,50};
    int n = 5;

   int l=0,r=n-1;

   while(l<r){
    int temp=0;
    temp=arr[l];
    arr[l]=arr[r];
    arr[r]=temp;
    l++;
    r--;
   }
    
    for(int i=0;i<5;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}
