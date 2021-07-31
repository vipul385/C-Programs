#include<stdio.h>
int fact(int n)
{
	if(n==0)
	{
		return 1;
	}
	if(n==1)
	{
		return 1;
	}
	int smallans=fact(n-1);
	return n*smallans;
}

int main()
{
	int n;
	printf("enter number");
	scanf("%d",&n);
	printf("%d",fact(n));
	return 0;
}
