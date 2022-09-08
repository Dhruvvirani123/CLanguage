#include<stdio.h>
main()
{
	float year,month,week,days;
	
	printf("\nEnter Years : ");
	scanf("%f",&year);
	
	month = year*12;
	week = year*52;
	days = year*365;
	
	printf("\nYears convert into month = %f",month);
	printf("\nyears convert into weeks = %f",week);
	printf("\nyears convert into days = %f",days);
	
	
	printf("\n\nEnter days : ");
	scanf("%f",&days);
	
	year = days/365;
	month = days/30;
	week = days/7;
	
	printf("\nDays convert into year = %f",year);
	printf("\nDays convert into month = %f",month);
	printf("\nDays convert into weeks = %f",week);
	
	printf("\n\nEnter Week : ");
	scanf("%f",&week);
	
	days = week*7;
	month = week/4.2;
	year = week/52;
	
	printf("\nDays convert into days = %f",days);
	printf("\nDays convert into month = %f",month);
	printf("\nDays convert into year = %f",year);
}