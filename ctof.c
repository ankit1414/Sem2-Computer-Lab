#include<stdio.h>

void main()
{
	float c,f;
	printf("\nEnter the Temp in Celsius: ");
	scanf("%f",&c);
	f = (9.0/5.0)*c + 32;
	printf("\nThe temp in Fahrenheit is: %f",f);
	printf("\n");
}