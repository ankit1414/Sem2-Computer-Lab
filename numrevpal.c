#include<stdio.h>
#include<math.h>

int length(int num)
{
int i;
for (i=1;num>10;i++)
	{
	 num = num/10;
	}
return i;
}

void main()
{
int num,numrev=0,temp,i,j;
printf("\n Enter a number: ");
scanf("%d",&num);
int temp2 = num;
int len = length(num);
printf("\n length: %d",len);
for (i=1,j=len-1;temp2>0;i++,j--)
	{
	 temp = temp2%10;
	 numrev += temp*((int)(pow(10,j)));
	 temp2 /= 10;
	}
printf("\n reverse of %d is %d",num,numrev);
if(numrev == num)
	printf("\n %d is also a palindrome.",num);
else
	printf("\n %d is not a palindrome.",num);
}
