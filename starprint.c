#include<stdio.h>
int main()
{
	int r;
	printf("enter no of rows\n");  //input rows
	scanf("%d",&r);
	int i;
	for(i=1;i<=r;i++)
	{ int j;
		for(j=1;j<=i;j++)
		{
		
		printf("*");     //star print
	}
	printf("\n");
	}
	return 0;
}
