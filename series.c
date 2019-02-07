#include<stdio.h>
#include<math.h>

int fac(int i)
{
 int fact = 1;
 for (int j=1;j<=i;j++)
	{
	 fact *= j;
	}
 return fact;
}

void main()
{
 int x,n;
 float sum = 0;
 printf("\n x + (x^2)/2! + (x^3)/3! + ... + (x^n)/n!");
 printf("\n Enter the value of x: ");
 scanf("%d",&x);
 printf("\n Enter the value of n: ");
 scanf("%d",&n);
 for (int i=1;i<=n;i++)
	{
	 sum +=(float)(pow(x,i))/(fac(i));
	}
 printf("\n Value: %f \n",sum);
}
