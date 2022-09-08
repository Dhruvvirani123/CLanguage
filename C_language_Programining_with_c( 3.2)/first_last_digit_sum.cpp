#include<stdio.h>
main()
{
	int n,sum=0,f,l;
	printf("Enter a number : ");
	scanf("%d",&n);
	
	l = n%10;
	
	while(n>=10)
	{
		n=n/10;
	}
	f = n;
	
	sum = f + l;
	printf("\nSum of First and Last Digit : %d",sum);
}