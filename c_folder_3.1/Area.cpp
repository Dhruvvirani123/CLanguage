#include<stdio.h>
int main()
{
	int r,ans;
	
	printf("\nEnter Radius : ");
	scanf("%d",&r);
	ans = 3.14*r*r;
	printf("\nArea of Circle : %d",ans);
	
	
	int b,d,ans2;
	
	printf("\nEnter length : ");
	scanf("%d",&b);
	printf("\nEnter Width : ");
	scanf("%d",&d);
	ans2 = b*d;
	printf("\nArea Of Rectangle : %d",ans2);
	
	
	int B,h,ans3;
	
	printf("\nEnter Height : ");
	scanf("%d",&B);
	printf("\nEnter Width : ");
	scanf("%d",&h);
	ans3 = 0.5*B*h;
	printf("\nArea Of Triangle : %d",ans3);
}