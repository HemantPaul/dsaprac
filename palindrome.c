#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%99s", str);

    int length = strlen(str);
    printf("%d ",strlen(str));

    int begin=0;
    int end= strlen(str)-1;
    int palindrome=1;
    
    for(int i=0;begin<end;i++){
        if (str[begin]!=str[end]){
            palindrome=0;
            break;
        }
        begin++;
        end--;
    }
    if(palindrome){
         printf("yes");
    }else{
         printf("no");
    }

}











