#include<stdio.h>

void main()
{
	int d,m,y;
	printf("\n Enter the date in dd/mm/yyyy: ");
	scanf("%d/%d/%d",&d,&m,&y);
	if(y%4==0)
		printf("\n %d is a leap year",y);
	else
		printf("\n %d is not a leap year.",y);
}