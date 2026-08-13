/* Write a C function:

char* MoveHyphen(char str[], int n);

that moves all - characters to the beginning of the string while keeping all other characters in their original order.

Example:

Input:  String-Compare
Output: -StringCompare

Another example:

Input:  ab-cd-ef
Output: --abcdef

Condition:

If str == NULL → return NULL

Your task: implement MoveHyphen(). */

#include <stdio.h>
#include <string.h>

char* MoveHyphen(char str[], int n)
{
    if (str == NULL)
        return NULL;

    static char result[1000];

    int count = 0;
    int j = 0;

    
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '-')
        {
            count++;
        }
    }

    for (int i = 0; i < count; i++)
    {
        result[j] = '-';
        j++;
    }

    
    for (int i = 0; i < n; i++)
    {
        if (str[i] != '-')
        {
            result[j] = str[i];
            j++;
        }
    }

    result[j] = '\0';

    return result;
}

int main()
{
    char str[] = "String-Compare";

    char *answer = MoveHyphen(str, strlen(str));

    printf("%s", answer);

    return 0;
}