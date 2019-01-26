#include<stdio.h>

void main()
{
	int n;
	printf("\n Enter a number: ");
	scanf("%d",&n);
	if(n>=0)
		printf("\n %d is positive.",n);
	else
		printf("\n %d is negative.",n);
}