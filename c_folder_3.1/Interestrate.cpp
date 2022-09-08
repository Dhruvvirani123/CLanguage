#include<stdio.h>
int main()
{
	float p,r,n,ans;
	
	printf("\nEnter Principal Amount : ");
	scanf("%f",&p);
	printf("\nEnter Interest Rate  : ");
	scanf("%f",&r);
	printf("\nEnter Year (in months) : ");
	scanf("%f",&n);
	
	ans = ((p*r*n)/100);
	printf("\nTotal Amount = %f",ans);
	
}