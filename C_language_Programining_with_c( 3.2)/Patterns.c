#include<stdio.h>
int main()
{
	int n,i,j,k=1;
	
		for(i=1; i<=5; i++)								//1//
	{
		for(j=1; j<=i; j++)
		{
			printf("%d ",k++);
	    }
	    printf("\n");
	}
		printf("\n");
		
	for(i=1; i<=6; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf(" *");
		}
		printf("\n");
	}
	
	for(i=5; i>=1; i--)									//2//
	{
		for(j=1; j<=i; j++)
		{
			printf(" *");
		}
		printf("\n");
	}
	printf("\n");
	
	
		for(i=1; i<=9; i++)								//3//
		{
			for(k=9; k>=i; k--)
			{
				printf(" ");
			}
			for(j=1; j<=i; j++)
			{
				printf("* ");
			}
			printf("\n");
		}
			printf("\n");
		
	for(i=1; i<=5; i++)										//4//
	{
		for(j=1; j<=i; j++)
		{
			printf("%c ",j+64);
		}
		printf("\n");
	}	
		printf("\n");
	
	for(i=1; i<=5; i++)								//5//
	{
		for(j=1; j<=i; j++)
		{
			printf("%d ",j%2);
	    }
	    printf("\n");
	}
		printf("\n");
		
		
    char ch='A';										//6//
    	for(i=1;i<=5;i++)
		{
       		 for(j=1;j<=i;j++)
        {
            printf("%c ",ch++);
        }
        printf("\n");
    	}	
}