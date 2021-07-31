#include<stdio.h>
int main()
{
	int n,f=1;
	printf("enter number");
	
	scanf("%d",&n);
	int i;
	for(i=1;i<=n;i++)
	{     f=f*i;
}
		printf("factorial of %d is %d",n,f);
		
	
	return 0;
}
