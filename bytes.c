#include<stdio.h>

void main()
{
	float B,b,KB,GB,n;
	printf("\nEnter the number of BYTES: ");
	scanf("%f",&B);
	b = B*8;
	KB = B/1024.0;
	GB = (KB/1024.0)/1024.0;
	n = B*2;
	printf("\nBits: %f",b);
	printf("\nNibble: %f",n);
	printf("\nKiloBytes: %f",KB);
	printf("\nGigaBytes: %f",GB);
	printf("\n");
}
