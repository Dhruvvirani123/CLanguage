#include<stdio.h>
#include<string.h>
main()
{
	char s1[20],s2[20];							//String Length//
	int n;
	
	printf("Enter Name : ");
	gets(s1);
	
	n = strlen(s1);
	printf("\nLength of String = %d",n);
}