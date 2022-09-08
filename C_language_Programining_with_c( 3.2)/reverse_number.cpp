#include<stdio.h>
main()
{
	int n,rev=0,rem;
	printf("Enter a Number");
	scanf("%d",&n);
	
	while(n>0)
	{
		rem = n%10;
		rev = rev * 10 + rem;
		n/=10;
	}
	printf("\nReverse Number : %d",rev);
}