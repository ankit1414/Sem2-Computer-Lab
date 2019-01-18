#include<stdio.h>
#include<math.h>

void main()
{
	float x,y,z;
	printf("\nEnter the values of x and y: ");
	scanf("%f %f",&x,&y);
	z = 2.5*(log(x)) - cos(0.523599) + pow(x,3) - pow(y,2);
	printf("\nThe answer is: %f",z);
	printf("\n");
}