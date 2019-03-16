#include<stdio.h>

void main(){
	char str[100];
	int count=0;
	printf("\n Enter a string: ");
	gets(str);
	for(int i=0;str[i]!='\0';i++)
		count++;
	printf("\n String length: %d",count);
}