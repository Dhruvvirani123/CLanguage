#include<stdio.h>
int main()
{
	char n;
	printf("\nEnter a  Vowel or Consonant : ");
	scanf("%c",&n);
	
	switch(n)
	{
		case 'A':
			printf("\nVowel");
			break;
		case 'a':
			printf("\nVowel");
			break;
			
			
		case 'E':
			printf("\nVowel");
			break;
		case 'e':
			printf("\nVowel");
			break;
		
		
		case 'I':
			printf("\nVowel");
			break;
		case 'i':
			printf("\nVowel");
			break;
			
		case 'O':
			printf("\nVowel");
			break;
		case 'o':
			printf("\nVowel");
			break;
			
		case 'U':
			printf("\nVowel");
			break;
		case 'u':
			printf("\nVowel");
			break;
			
		default:
		printf("\nConsonant");
	}
}