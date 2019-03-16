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
printf("\nTranspose matrix is:\n");
for(int i=0;i<r;i++){
	for(int j=0;j<c;j++)
		printf("%d ",arr[j][i]);
	printf("\n");
}

}
