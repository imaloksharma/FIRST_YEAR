#include <stdio.h>
#include<stdlib.h>
int main() 
{
  int a, b, add, subtract, multiply;
  float divide;

  printf("Enter two numbers\n");
  scanf("%d%d", &a, &b);
  add = a + b;
  printf("Sum = %d\n", add);
  subtract = a - b;
  printf("subtract = %d\n", subtract);
  multiply = a * b;
   printf("Multiplication= %d\n", multiply);
  divide = a / (float)b;
  printf("Division = %.2f\n", divide);

  return 0;
}