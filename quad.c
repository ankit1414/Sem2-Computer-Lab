#include<stdio.h>
#include<math.h>

void main()
{
	float a,b,c,x1,x2,D;
	printf("\n ax^2 + bx + c = 0: ");
	printf("\n Enter a, b and c: ");
	scanf("%f %f %f",&a,&b,&c);
	D = sqrt((pow(b,2))-(4*a*c));
	if (pow(b,2)-(4*a*c)<0)
		printf("\n IMAGINARY ROOTS.");
	else
	{
		x1 = (-b + D)/(2*a);
		x2 = (-b - D)/(2*a);
		printf("\n x1: %f",x1);
		printf("\n x2: %f",x2);
	}

}