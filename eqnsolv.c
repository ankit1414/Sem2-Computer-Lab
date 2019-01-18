#include<stdio.h>
#include<math.h>

void main()
{
	float a,b,c;
	printf("\nEnter the values of a and b: ");
	scanf("%f %f",&a,&b);
	c = 2*a + (b/a) - ((a/2.5) * b * ((a/3.0) - b));
	printf("\nThe answer is: %f",c);
	printf("\n");
}
