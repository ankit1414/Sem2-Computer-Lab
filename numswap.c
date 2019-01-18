#include<stdio.h>

void main()
{
	int x,y;
	printf("\nEnter 2 numbers: ");
	scanf("%d %d",&x,&y);
	x = x + y;
	y = x - y;
	x = x - y;
	printf("\nAfter swapping: %d %d",x,y);
	printf("\n");
}
