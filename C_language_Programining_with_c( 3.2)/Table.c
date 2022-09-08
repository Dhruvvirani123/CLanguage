#include<stdio.h>
int main()
{
 

	int n,i;										//Table//

	printf("\nEnter a Number For Table : ");
	scanf("%d",&n);
	
	for(i=1 ; i<=10 ; i++)
	{
		printf("\n %d * %d = %d",n,i,n*i);
	}
}