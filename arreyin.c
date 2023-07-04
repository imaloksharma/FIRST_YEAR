#include <stdio.h>
int main() {
  int size;
  printf("Enter the size of the array: ");
  scanf("%d", &size);
  int a[size];
  printf("\nEnter the 1st number: ");
  scanf("%d", &a[0]);
  printf("\nEnter the 2nd number: ");
  scanf("%d,", &a[1]);
  printf("\nEnter the 3rd number: ");
  scanf("%d,", &a[2]);
  for (int i=3; i <= size; i++) {
    printf("\nEnter the %dth number: ", i+1);
    scanf("%d", &a[i]);
  }
  printf("\nElements of the array are: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", a[i]);
  }
  return 0;
}
