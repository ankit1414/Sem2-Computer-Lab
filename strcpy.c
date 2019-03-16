#include<stdio.h>

void main(){
	char str[100],str2[100];
	printf("\n Enter a string: ");
	gets(str);
	for(int i=0;i<100&&str[i]!='\0';i++)
		str2[i]=str[i];
	printf("\n Copied string: %s",str2);
}