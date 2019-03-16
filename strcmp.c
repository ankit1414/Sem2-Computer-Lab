#include<stdio.h>
#include<stdlib.h>

int strlen(char str[100]){
	int count=0;
	for(int i=0;str[i]!='\0';i++)
		count++;
	return count;
}
void main(){
	char str1[100],str2[100];
	int same=0;
	printf("\n Enter 1st string: ");
	gets(str1);
	printf("\n Enter 2nd string: ");
	gets(str2);
	int len1=strlen(str1);
	int len2=strlen(str2);
    if (len1!=len2) {printf("\n Strings are not equal.");exit(0);}
	for(int i=0;i<len1;i++){
		if (str1[i]==str2[i])
			same=1;
		else{
			same=0;
			break;
		} 
	}
	if(same==1) printf("\n strings are equal.");
	else printf("\n strings are not equal.");
}