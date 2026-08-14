// You have 2 numbers a and b, and c tells you which operation to perform.
// Then return the result.


#include<stdio.h>
int operationChoices (int c, int a, int b)
{
  if (c == 1)
    {
      return a + b;
    }
  else if (c == 2)
    {
      return a - b;
    }
  else if (c == 3)
    {
      return a * b;
    }
  else if (c == 4)
    {
      return a / b;
    }
}
int main ()
{
  int x, y, z;
  int result;
  scanf ("%d", &x);
  scanf ("%d", &y);
  scanf ("%d", &z);
  result = operationChoices (x, y, z);
  printf ("%d", result);
  return 0;
}
