#include<stdio.h>

void main()
{
	int num[20],n;
	printf("\n Enter the number of numbers you want to enter: ");
	scanf("%d",&n);
	printf("\n Enter the numbers: ");
	for (int i=0;i<n;i++)
		scanf("%d",&num[i]);
	printf("\n Index  Value");
	for (int j=0;j<n;j++)
		printf("\n %d	%d",j,num[j]);
	
}