#include<stdio.h>

int main()
{
 float fahr, cel,kelvin;
 printf("Enter the temperature in celsius: ");
 scanf("%f", &cel);
 fahr = (1.8 * cel) + 32.0;
 kelvin= cel+273;
 printf("\nTemperature in Fahrenheit: %.2f F\n", fahr);
 printf("\nTemperature in kelvin: %.2f F\n", kelvin);
 return 0;
}