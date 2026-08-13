/*

A string str
Two characters ch1 and ch2

The program should swap all occurrences of ch1 and ch2 in the string.

That means:

Every ch1 in the original string should become ch2.
Every ch2 in the original string should become ch1.
All other characters should remain unchanged.
Example */

// #include<stdio.h>
// #include<string.h>
// int main()
// {
// char str[]="banana";
// int i=0;
// while(str[i]!='\0'){
//     if (str[i]=='b'){
//         str[i]='a';
        
//     }
//     else if (str[i]=='a'){      
//         str[i]='b';
//     }
//     i++;
// }
// printf("%s",str);
// }


#include <stdio.h>

void *ReplaceCharacter(char str[], int n, char ch1, char ch2)
{
    int i = 0;

    if (str == NULL)
        return NULL;

    if (ch1 == ch2)
        return str;

    while (i < n)
    {
        if (str[i] == ch1)
        {
            str[i] = ch2;
        }
        else if (str[i] == ch2)
        {
            str[i] = ch1;
        }

        i++;
    }

    return str;
}

int main()
{
    char str[100];
    char ch1, ch2;
    int n;

    printf("Enter string: ");
    scanf("%99s", str);

    printf("Enter ch1: ");
    scanf(" %c", &ch1);

    printf("Enter ch2: ");
    scanf(" %c", &ch2);

    n = 0;
    while (str[n] != '\0')
    {
        n++;
    }

    ReplaceCharacter(str, n, ch1, ch2);

    printf("Result: %s\n", str);

    return 0;
}