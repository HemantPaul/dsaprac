/* Password Checker — Short Question

Write a function:

int CheckPassword(char str[], int n);

Return 1 if the password is valid, otherwise 0.

A valid password must:

Have at least 4 characters
Contain at least one digit (0–9)
Contain at least one capital letter (A–Z)
Have no spaces
Have no /
Must not start with a digit

Example:

aA1_67 → 1  ✅
a987 abC012 → 0  ❌ */


#include <stdio.h>

int CheckPassword(char str[], int n)
{
   if(n<4)
   return 0;

   if(str[0]>='0'&& str[0]<='9')
   return 0;

   int hasdigit=0;
   int hascapital=0;

   for (int i = 0; i<n; i++){
    
    if(str[i]==' ' || str[i] == '/'){
         return 0;
    }

    if(str[i]>='0'&& str[i]<='9'){
        hasdigit =1;
    }
    if(str[i]>='A'&& str[i]<='Z'){
        hascapital =1;
    }
   }
   if(hascapital&&hasdigit){
    printf("valid\n");
    return 1;
   }
 return 0;
}

int main()
{
    char str[] = "aA1_67";
    int n = 6;

    printf("%d", CheckPassword(str, n));

    return 0;
}