#include<stdio.h>
#include<string.h>

rs()
{
	char a;
	
	scanf("%c",&a);
	if(a != '\n')
	{
		rs();
		printf("%c",a);
	}	
}
main()
{
	printf("Enter a Sentence : ");
	rs();
}