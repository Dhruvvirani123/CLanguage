#include<stdio.h>
#include<string.h>
main()
{
	char inputarray[20],reversedarray[20];
	
	printf("Enter the string for palindrome : ");
	scanf("%s",&inputarray);
	
	strcpy(reversedarray,inputarray);
	strrev(reversedarray);
	
	if(strcmp(inputarray,reversedarray)==0)
	{
		printf("%s is a palindrome",inputarray);
	}
	else
	{
		printf("%s is not Palindrome",inputarray);
	}
}