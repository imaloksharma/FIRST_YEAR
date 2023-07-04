#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int feet, inches;
    int height_in_inches;
    float height_in_cm;

    printf(" enter your height in feet and inches:");
    scanf("%d %d", &feet, &inches);

    // convert feet and inches to total inches
    height_in_inches = (feet * 12) + inches;

    // convert total inches to centimeters
    height_in_cm = height_in_inches * 2.54;

    printf("Your height is in centimeters %.2fcm.\n", height_in_cm);

    return 0;
}