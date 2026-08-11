// int number = character - '0';
// '0' - '0' = 0
// '1' - '0' = 1
// '2' - '0' = 2
// '3' - '0' = 3
// ...
// '9' - '0' = 9

// result = result ^ next; means XOR
/* You are given a string containing:

0 and 1 → binary numbers
A → AND
B → OR
C → XOR

Calculate the result from left to right, without operator precedence.

Example:

"1C0C1C1A0B1"

means:

1 XOR 0 XOR 1 XOR 1 AND 0 OR 1

Return the final result. */


#include<stdio.h>
int OperationsBinaryString(char str[]){
   if (str == NULL)
        return -1;

  int result = str[0]-'0';

  for(int i=1;str[i] != '\0';i=i+2){

 char op = str[i];
 char next = str[i+1]-'0';

 if(op=='A'){
    result = result & next;
 }
else if (op == 'B')
        {
            result = result | next;
        }
        else if (op == 'C')
        {
            result = result ^ next;
        }
  }
  return result;
}
int main(){
    char str[] = "1C0C1C1A0B1";

    int ans= OperationsBinaryString(str);
    printf("%d",ans);

    return 0;
}