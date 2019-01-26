#include<stdio.h>

void main()
{
	int n;
	printf("\n Enter a 3 digit number: ");
	scanf("%d",&n);
	if (n%10 == n/100)
		printf("\n %d is palindrome.",n);
	else
		printf("\n %d is not palindrome",n);
}