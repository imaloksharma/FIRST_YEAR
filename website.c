#include<stdio.h>
int main()
{
  int n;
  printf("Choose an option :\nEnter 1 to enter in the website \nEnter 2 to not enter in the website\n");
  scanf("%d",&n);

  if( n==1)
  {
    printf("Welcome to the website");
  }
  else if( n==2)
  {
    printf("You cannot enter in the website");
  }
  else
  {
    printf("You have entered an invalid option");
  }
  return 0;
  }