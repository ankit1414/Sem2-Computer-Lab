#include<stdio.h>



void main()
{
int num,sum=0,temp,i;
printf("\n Enter a number: ");
scanf("%d",&num);
int temp2 = num;
for (i=1;temp2>0;i++)
	{
	 temp = temp2%10;
	 sum += temp;
	 temp2 /= 10;
	}
printf("\n The sum of the digits of  %d is %d",num,sum);
}
