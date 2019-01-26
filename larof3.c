#include<stdio.h>

void main()
{
	int a,b,c;
	printf("\n Enter 3 numbers: ");
	scanf("%d %d %d",&a,&b,&c);
	if (a>b && a>c)
		printf("\n %d is the largest of 3.",a);
	else if (b>a && b>c)
		printf("\n %d is the largest of 3.",b);
	else if (c>a && c>b)
		printf("\n %d is the largest of 3.",c);
}