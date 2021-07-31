  // LEAP YEAR
#include<stdio.h>
int main()
{
	int year;
	printf("enter year");
	scanf("%d",&year);
	if(year%400==0)
	{
		printf("it is  leap year");
	}
	else if(year%4==0 && year%100!=0 )
	{
		printf("it is leap year");
		
	}
	else
	{
		printf("it is not leap year");
	}
	return 0;
}
