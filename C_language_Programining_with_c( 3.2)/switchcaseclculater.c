#include<stdio.h>
int main()
{
	float a,b,ans;
	int n,c;
	
	printf("\nSelect Option");
	printf("\n1.Addition \n2.Subtraction \n3.Multiplication \n4.Division\n\n");
	printf("Enter Option : ");
	scanf("%d",&n);
	
	printf("Enter A = ");
	scanf("%f",&a);
	printf("Enter B = ");
	scanf("%f",&b);
	
	switch(n)
	{
		case 1:
			ans = a + b;
			printf("\nAddition = %f",ans);
			break;
			
		case 2:
			ans = a - b;
			printf("\nSubtraction = %f",ans);
			break;
			
		case 3:
			ans = a * b;
			printf("\nMultiplication = %f",ans);
			break;
			
		case 4:
			ans = a / b;
			printf("\nDivision = %f",ans);
			break;

		default:
			printf("\nInvalid Input");	
	}
	
}