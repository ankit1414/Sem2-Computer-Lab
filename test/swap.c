#include<stdio.h>

void main()
{
int a,b;
printf("Enter two numbers: ");
scanf("%d %d",&a,&b);	
int *x,*y,temp;
x=&a;
y=&b;
temp = *y;
*y = *x;
*x = temp;
printf("\nNumbers after swapping: %d %d",a,b);
}
