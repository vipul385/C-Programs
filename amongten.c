#include<stdio.h>
int main()
{
	int a,b;
	int i;
	printf("enter number");
	scanf("%d",&a);
	
	for(i=2;i<=10;i++)
	{
		printf("enter number %d \n",i);
	scanf("%d",&b);
	if(a>b)
	a=a;
	else
	{
		a=b;
	}
	
	}
	printf("largest number is %d",a);
	return 0;
}
