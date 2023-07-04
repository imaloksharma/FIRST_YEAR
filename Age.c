#include <stdio.h>
#include<stdlib.h>
int main()
{
	int age;
	printf("Please enter age:");
	scanf("%d", &age);
	if (age <= 0)
        {
		printf("not birth");
	}
    else if (age >= 1 && age <= 5)
        {
		printf("Infant");
       }
    else if  (age >= 6 && age <= 10)
        {
               printf("Child");
	}
    else {
		printf("Adult");
	}
}