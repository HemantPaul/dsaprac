/*./;'[]  */

// #include <stdio.h>

// int main()
// {
//     int num1 = 451;
//     int num2 = 349;

//     int l1, l2;
//     int carrycount = 0;
//     int carry = 0;

//     while (num1 > 0 || num2 > 0)
//     {
//         l1 = num1 % 10;
//         l2 = num2 % 10;

//         if (l1 + l2 + carry > 9)
//         {
//             carrycount++;
//             carry = 1;
//         }
//         else
//         {
//             carry = 0;
//         }

//         num1 = num1 / 10;
//         num2 = num2 / 10;
//     }

//     printf("%d", carrycount);

//     return 0;
// }

#include <stdio.h>

int NumberOfCarries(int num1, int num2)
{
    int carry = 0;
    int carryCount = 0;

    while (num1 > 0 || num2 > 0)
    {
        int digit1 = num1 % 10;
        int digit2 = num2 % 10;

        if (digit1 + digit2 + carry > 9)
        {
            carryCount++;
            carry = 1;
        }
        else
        {
            carry = 0;
        }

        num1 = num1 / 10;
        num2 = num2 / 10;
    }

    return carryCount;
}

int main()
{
    int num1, num2;

    printf("Enter num1: ");
    scanf("%d", &num1);

    printf("Enter num2: ");
    scanf("%d", &num2);

    printf("Number of carries: %d", NumberOfCarries(num1, num2));

    return 0;
}