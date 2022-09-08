#include<stdio.h>
main()
{
	int a,i,fact=1;
	
	printf("Enter a Number : ");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++)
	fact = fact * i;
	
	printf("\nFactorial is : %d",fact);
}