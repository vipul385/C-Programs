#include<stdio.h>
int main()
{
	int n,f=1;
	printf("enter number");
	
	scanf("%d",&n);
	int i=1;
	while(i<=n)
	{
		f=f*i;
		i++;
	}

		printf("factorial of %d is %d",n,f);
		
	
	return 0;
}
