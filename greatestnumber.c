#include <stdio.h>
#include<stdlib.h>
int main()
{
  int a, b, c;
  printf("Enter the First Number : ");
  scanf("%d", &a);
  printf("\nEnter the second number : ");
  scanf("%d", &b);
  printf("\nEnter the third number : ");
  scanf("%d", &c);

  if (a > b && a > c)
  {
    printf("\nThe first number is greates");
  } 
  else if (b > a && b > c)
  {
    printf("\nThe second number is greatest ");
  }
  else if (c > a && c > b)
  {
    printf("\nThe third number is greatest");
  } 
  else {
    printf("\nAll are equal");
  }
  return 0;
}
