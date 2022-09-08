#include<stdio.h>
int main()
{
	float a,b,c,ans;
	
	printf("\nEnter First Value : ");
	scanf("%f",&a);
	
	printf("\nEnter Secound Value : ");
	scanf("%f",&b);
	
	printf("\nEnter Third Value : ");
	scanf("%f",&c);
	
	ans = a+b+c;
	printf("\nAddition = %f",ans);
	ans = a-b-c;
	printf("\nSubstraction = %f",ans);
	ans = a*b*c;
	printf("\nMultiplication = %f",ans);
	ans = a/b/c;
	printf("\nDivision = %f",ans);
//	ans = a%b%c;
//	printf("\nModular = %f",ans);
	
	return 0;
	
}