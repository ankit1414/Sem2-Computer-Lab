#include<stdio.h>

void main()
{
	int num[20],n;
	int sum = 0;
	float avg;
	printf("\n Enter the number of numbers you want to enter: ");
	scanf("%d",&n);
	printf("\n Enter the numbers: ");
	for (int i=0;i<n;i++)
		scanf("%d",&num[i]);
	for (int j=0;j<n;j++)
		sum += num[j];
	
	avg = ((float)(sum))/n;
	printf("\n Average: %f",avg);
	
}