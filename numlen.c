#include<stdio.h>


void main()
{
	int num,temp,i;
	printf("\n Enter a number: ");
	scanf("%d",&num);
	temp = num;
	for (i=1;temp>10;i++)
		{
		 temp = temp/10;
		}	
	printf("\n The number of digits in %d is: %d",num,i);	
		
}
