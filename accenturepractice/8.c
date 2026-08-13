// important
/* Write a C function:

char* DectoNBase(int n, int num)

that converts a decimal number num into base n.

2 <= n <= 36
Use 0–9 for values 0–9
Use A–Z for values 10–35
Return the result as a string.

Example:

n = 12
num = 718


Output: 4BA

Because: */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* DectoNBase(int n, int num)
{
    char symbol[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    char *result = malloc(1000 * sizeof(char));

    int remainder;
    int index = 0;

    while (num != 0)
    {
        remainder = num % n;

        result[index] = symbol[remainder];
        index++;

        num = num / n;
    }

    result[index] = '\0';

    // Reverse the result
    int start = 0;
    int end = index - 1;

    while (start < end)
    {
        char temp = result[start];
        result[start] = result[end];
        result[end] = temp;

        start++;
        end--;
    }

    return result;
}

int main()
{
    int n = 12;
    int num = 718;

    char *answer = DectoNBase(n, num);

    printf("%s\n", answer);

    free(answer);

    return 0;
}