/* In short:

Given n and m, find the sum of numbers from 1 to m that are NOT divisible by n, find the sum of numbers that ARE divisible by n, and return their difference.

Formula:
Answer = Sum(not divisible) - Sum(divisible)

Example:

n = 4, m = 20

Divisible:     4 + 8 + 12 + 16 + 20 = 60
Not divisible:  1 + 2 + 3 + ... + 19 = 150

Answer = 150 - 60 = 90

That's it. ✅ */


#include <stdio.h>

int differenceofSum(int n, int m)
{
    int sumdiv = 0;
    int sumindiv = 0;

    for (int i = 1; i <= m; i++)
    {
        if (i % n == 0)
        {
            sumdiv += i;
        }
        else
        {
            sumindiv += i;
        }
    }

    return sumindiv - sumdiv;
}

int main()
{
    int n, m;

    scanf("%d", &n);
    scanf("%d", &m);

    printf("%d", differenceofSum(n, m));

    return 0;
}