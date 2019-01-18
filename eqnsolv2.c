#include<stdio.h>
#include<math.h>

void main()
{
	float x,y,z;
	printf("\nEnter the values of x and y: ");
	scanf("%f %f",&x,&y);
	z = 3*(pow(x,3)) + 4*(pow(x,3))*(pow(y,2)) - 6*y + 2*x*y - pow(y,2);
	printf("\nThe answer is: %f",z);
	printf("\n");
}