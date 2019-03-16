#include<stdio.h>

void main()
{
int r,c;
int arr1[20][20],arr2[20][20],arrdif[20][20];
printf("\n Enter the number of rows and columns: ");
scanf("%d %d",&r,&c);
printf("\n Enter the elements of 1st matrix: ");
for(int i=0;i<r;i++){
	for(int j=0;j<c;j++)
		scanf("%d",&arr1[i][j]);
}
printf("\n Enter the elements of 2nd matrix: ");
for(int i=0;i<r;i++){
	for(int j=0;j<c;j++)
		scanf("%d",&arr2[i][j]);
}
for(int i=0;i<r;i++){
	for(int j=0;j<c;j++)
		arrdif[i][j]=arr1[i][j]-arr2[i][j];
}
printf("\nDifference matrix is:\n");
for(int i=0;i<r;i++){
	for(int j=0;j<c;j++)
		printf("%d ",arrdif[i][j]);
	printf("\n");
}

}
