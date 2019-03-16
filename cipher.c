#include<stdio.h>

void main(){
	char str[100],cipher[100];
	int a;
	printf("\n Enter a string: ");
	gets(str);
	printf("\n Choose an option:");
	printf("\n 1: Encrypt");
	printf("\n 2: Decrypt\n ");
	scanf("%d",&a);
	switch(a){
		case 1: for(int i=0;i<100&&str[i]!='\0';i++)
					cipher[i]=str[i]+4;
				printf("\n Encrypted string: %s",cipher);
				break;
		case 2:	for(int i=0;i<100&&str[i]!='\0';i++)
					cipher[i]=str[i]-4;
				printf("\n Decrypted string: %s",cipher);
				break;	
	}

}