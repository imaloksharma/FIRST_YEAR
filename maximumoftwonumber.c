#include <stdio.h>
#include <stdlib.h>
int main()

{
  /* Maximum The two Numbers
   */

  int num1, num2;
  printf("Enter 1st Number:\t");
  scanf("%d", &num1);
  printf("Enter 2nd Number:\t");
  scanf("%d", &num2);
  if (num1 > num2) {
    printf("Number 1 %d is maximum then number 2 %d\n", num1, num2);
  }

  else

  {
    printf("Number 2 %d is maximum then number 1 %d\n", num2, num1);
  }
  return 0;
}
