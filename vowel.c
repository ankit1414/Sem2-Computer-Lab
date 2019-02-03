#include <stdio.h>
     
void main()
{
	char ch;
	printf("\n Enter a character: ");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U': printf("\n %c is a vowel.\n", ch); break;
		default : printf("\n %c isn't a vowel.\n", ch);
	}
}
    