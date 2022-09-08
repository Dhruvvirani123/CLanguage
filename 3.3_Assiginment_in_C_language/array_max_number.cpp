#include<stdio.h>
main()
{
	int a[4],i,max;
	for(i=0;i<=3;i++)
	{
		printf("\nEnter A[%d] = ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<=3;i++)
	{
		printf("\nA[%d] = %d",i+1,a[i]);
	}
	max = a[0];
	for(i=1;i<=3;i++)
	{
		if(max < a[i])
		{
			max = a[i];
		}
	}
	printf("\nMaximum Number : %d",max);
}