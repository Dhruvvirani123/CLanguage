#include<stdio.h>
int main()
{
	int  c;
	printf("Enter a number : ");
	scanf("%d",&c);
	
	if(c%2 == 0)
	{
		printf("Your number is Even");
	}
	else
	{
		printf("Your number is odd");
	}
	
	int i,n,sum=0;
	printf("\n\nEnter a numbers : ");
	scanf("%d",&n);
	for (i = 1; i <= n; i++) 
	{
		if(i%2 == 0) 
		{
		  printf(" %d", i);
		  sum+=i;
		}	
	}
	printf("\nThe Sum is Evean Number : %d",sum);


	printf("\n\nEnter a Number :");
	scanf("%d",&n);
	
	for (i = 1; i <= n; i+=2) 
	{ 
		{
		  printf("%d ", i);
		  sum += i;
		}
	}
	printf("\nThe sum is odd number : %d",sum);
}