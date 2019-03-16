#include<stdio.h>

void main()
{
	char str[100];
	int count=0;
	int pal;
	printf("\n Enter a string: ");
	gets(str);
	for(int i=0;str[i]!='\0';i++)
		count++;
	for(int i=0;i<=count/2;i++){
		if(str[i]==str[count-i-1])
			pal=1;
		else{
			pal=0;
			break;
		}
	}
	if(pal==1) printf("\n string is palindrome.");
	else printf("\n string is not palindrome.");	
}