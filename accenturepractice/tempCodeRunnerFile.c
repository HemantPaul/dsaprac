#include<stdio.h>
#include<string.h>
int main()
{
char str[]="banana";
int i=0;
while(str[i]!='\0'){
    if (str[i]=='b'){
        str[i]='a';
        
    }
    else if (str[i]=='a'){
        str[i]='b';
    }
    i++;
}
printf("%s",str);
}