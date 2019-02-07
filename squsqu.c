#include<stdio.h>
#include<math.h>

void main()
{
	int num,i,temp1,temp2;
	printf("\n The 4 digit perfect squares where first 2 & last 2 digits are perfect squares as well are: \n ");
	for (i=32;i<100;i++)
	{
		num = pow(i,2);
		temp1 = num%100;
		temp2 = num/100;
		if ((sqrt(temp1) - floor(sqrt(temp1))) == 0 && (sqrt(temp2) - floor(sqrt(temp2))) == 0 )
			printf("\t %d",num);
	}
}
