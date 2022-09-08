#include<stdio.h>
main()
{
	int a[5],i,j,n;										//Ascending//
	printf("Enter Array Elements : \n");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++)
		{
			if(a[i]>a[j])
			{
				n = a[i];
				a[i] = a[j];
				a[j] = n;
			}
		}
	}
	printf("Array Elements : ");
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	
																//Dscending//
	printf("\nEnter Array Elements : \n");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++)
		{
			if(a[i]<a[j])
			{
				n = a[i];
				a[i] = a[j];
				a[j] = n;
			}
		}
	}
	printf("Array Elements : ");
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}	
}