#include<stdio.h>

void main()
{
	char arr[20];
	int n;
	char c;
	printf("\n Enter the number of elements you want to enter: ");
	scanf("%d",&n);
	printf("\n Enter the elements: ");
	for (int i=0;i<n;i++)
		scanf(" %c",&arr[i]);
	printf("\nArray is: \n");	
	for (int j=0;j<n;j++)
		printf("\t%c",arr[j]);
	
	printf("\n Enter the character: ");
	scanf(" %c",&c);
	for (int j=0;j<n;j++){
		for (int k=j+1;k<n;k++){
			if(arr[k]==arr[j])
				arr[k]=c;			
		}	
	}
printf("\nNew array is: \n");	
for (int j=0;j<n;j++)
	printf("\t%c",arr[j]);
	

	
}