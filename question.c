#include<stdio.h>
int main()
{
  int a;
  printf("* Welcome to the quiz *\n \nQ : Who is the prime minister of india ?\nOptions : \n1.Atal bihari bajpai.\n2.Rahul Gandhi.\n3.Narendra Modi.\n4.Ram bilas paswan.\nEnter you answer here :");
  scanf("%d",&a);
  if(a==3)
  {
    printf("\nRight Answer");
  }
  else if(a==1 || a==2 || a==4)
  {
    printf("\nWrong Answer");
  }
  else
  {
    printf("Invalid input");
  }
  return 0;
}