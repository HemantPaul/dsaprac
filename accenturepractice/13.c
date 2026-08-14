/* Given two numbers a and b, find the number between them that can be divided by 2 the maximum number of times.

If there is a tie, return the smaller number.
Return that number */


#include <stdio.h>

int MaxExponents(int a, int b)
{
    int max = a;
    int maxcount = 0;

    for (int i = a; i <= b; i++)
    {
        int num = i;
        int count = 0;

        while (num % 2 == 0 && num != 0)
        {
            count++;
            num = num / 2;
        }

        if (count > maxcount)
        {
            max = i;
            maxcount = count;
        }
    }

    return max;
}

int main()
{
    int a, b;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    printf("Answer: %d\n", MaxExponents(a, b));

    return 0;
}