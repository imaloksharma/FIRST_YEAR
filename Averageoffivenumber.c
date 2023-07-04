#include <stdio.h>
#include <stdlib.h>
int main() {

  int number = 0;
  int count = 5;
  long sum = 0L;
  float average = 0.0f;
  int i = 0;
  for (i = 1; i <= count; i++) {
    printf(" Enter the grade:");
    scanf("%d", &number);
    sum += number;
  }
  average = (float)sum / count;
  printf("Average of the five number is : %f", average);
  return 0;
}
