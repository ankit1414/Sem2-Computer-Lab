#include<stdio.h>

void main()
{
int r,c;
int arr[20][20];
printf("\n Enter the number of rows and columns: ");
scanf("%d %d",&r,&c);
printf("\n Enter the numbers: ");
for(int i=0;i<r;i++){
	for(int j=0;j<c;j++)
		scanf("%d",&arr[i][j]);
}
printf("\nMatris is:\n");
for(int i=0;i<r;i++){
	for(int j=0;j<c;j++)
		printf("%d ",arr[i][j]);
	printf("\n");
}
int max,min;
max=min=arr[0][0];
for(int i=0;i<r;i++){
	for(int j=0;j<c;j++){
		if(arr[i][j]<min)
			min=arr[i][j];
		if(arr[i][j]>max)
			max=arr[i][j];
	}		
}
printf("\n Max element is: %d",max);
printf("\n Min element is: %d",min);
}
