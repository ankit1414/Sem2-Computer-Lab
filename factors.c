#include<stdio.h>

void main()
{
	int num, fac1, fac2;
	printf("\n Enter a number: ");
	scanf("%d",&num);
	for (fac1=1;fac1<(num/2);fac1++)
	{
		if (num%fac1 == 0)
		{
			fac2 = num/fac1;
			printf("\n %d and %d are factors of %d",fac1,fac2,num);
		}
	}
}