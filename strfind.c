#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(){
	char str1[100],str2[100];
	int same=0;
	int i=0;
	printf("\n Enter the line: ");
	gets(str1);
	printf("\n Enter the word to search for: ");
	gets(str2);
	int len1=strlen(str1);
	int len2=strlen(str2);
	while(str1[i]!='\0'){
		char str3[100];
		int j;
		for(j=0;j<len2;j++)str3[j]=str1[i+j];
		str3[j]='\0';
		if(strcmp(str3,str2)==0){printf("\n pos:%d",i+1);exit(0);}
		else i++;
	}	
}