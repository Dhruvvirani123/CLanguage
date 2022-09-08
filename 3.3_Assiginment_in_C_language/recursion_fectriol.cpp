#include<stdio.h>
int fact(int a)
{
	int i,ans=1;
	for(i=a;i>1;i--)
	{
		ans = ans*i;
	}
}
main()
{
	int n;
	printf("Enter Number : ");
	scanf("%d",&n);
	
	printf("\nFectriol = %d",fact(n));
}