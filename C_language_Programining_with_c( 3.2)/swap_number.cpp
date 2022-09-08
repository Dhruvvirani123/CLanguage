#include<stdio.h>
main()
{
	int a,b;
	printf("Enter A :");
	scanf("%d",&a);
	printf("\nEnter B : ");
	scanf("%d",&b);
	
	a=a*b;
	b=a/b;
	a=a/b;
	
	printf("\nSwap number : A=%d B=%d",a,b);
}