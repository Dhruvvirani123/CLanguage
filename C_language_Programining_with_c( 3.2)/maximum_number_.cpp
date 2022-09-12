#include<stdio.h>
main()
{
	int n,remainder,maximum=0;
	
	printf("Enter Any Number : ");
	scanf("%d",&n);
	
	while(n != 0)
	{
		remainder = n%10;
		
		if(remainder > maximum)
		{
			maximum = remainder;
		}
		n = n/10;
	}
	printf("\nMaximum Number is : %d",maximum);	
}