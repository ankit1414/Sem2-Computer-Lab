#include<stdio.h>

void main()
{
int n;
printf("Enter the number of lines: ");
scanf("%d",&n);	
int i,j;
for(i=0;i<n;i++){
	for(j=0;j<=i;j++)
		printf("*");
	printf("\n");
}

}
