   // CHECK NUMBER POSITIVE OR NEGATIVE
#include<stdio.h>
int main()
{
	int num;
	printf("enter number\n");
	scanf("%d",&num);
	if(num<0)    //CONDITIONAL STATEMENT
	{
		printf("number is negative");
	}
	else
	{
		printf("number is positive");
	}
   return 0;
}
