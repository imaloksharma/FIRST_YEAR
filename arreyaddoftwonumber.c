// C program to find the sum of two matrices of order 2*2
#include <stdio.h>
#include <stdlib.h>
int main() {
  int a[2][2], b[2][2], result[2][2];
  printf("Enter elements of 1st matrix\n");
  for (int i = 0; i < 2; ++i)
    for (int j = 0; j < 2; ++j) {
      printf("Enter the number of a %d%d: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }
  printf("Enter elements of 2nd matrix\n");
  for (int i = 0; i < 2; ++i)
    for (int j = 0; j < 2; ++j) {
      printf("Enter the number of b %d%d: ", i + 1, j + 1);
      scanf("%d", &b[i][j]);
    }
  for (int i = 0; i < 2; ++i)
    for (int j = 0; j < 2; ++j) {
      result[i][j] = a[i][j] + b[i][j];
    }
  printf("\nSum Of Matrix:");

  for (int i = 0; i < 2; ++i)
    for (int j = 0; j < 2; ++j) {
      printf("%d\t", result[i][j]);

      if (j == 1)
        printf("\n");
    }
  return 0;
}