#/* 
You are given two numbers, m and n.

Find all the numbers between m and n that can be divided exactly by both 3 and 5.

Then add those numbers together and return the answer. */

#include <stdio.h>

int Calculate(int m, int n)
{
    int sum = 0;

    for(int i = m; i <= n; i++)
    {
        if(i % 3 == 0 && i % 5 == 0)
        {
            sum = sum + i;
        }
    }

    return sum;
}

int main()
{
    int m, n;

    printf("Enter m: ");
    scanf("%d", &m);

    printf("Enter n: ");
    scanf("%d", &n);

    printf("%d", Calculate(m, n));

    return 0;
}