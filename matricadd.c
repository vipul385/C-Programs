#include<stdio.h>
int main()
{
	int a[10][10], b[10][10], c[10][10], i, j, k;
	printf("\nEnter First Matrix : \n");      //input first matrix
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("\nEnter Second Matrix:\n");      //input second matrix
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}

	printf("The First Matrix is: \n");      //print first matrix
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf(" %d ", a[i][j]);
		}
		printf("\n");
	}

	printf("The Second Matrix is : \n");     //print second matrix
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf(" %d ", b[i][j]);
		}
		printf("\n");
	}
	
	for (i = 0; i <= 2; i++)       //loop for adding
	{
		for (j = 0; j <= 2; j++)
		{
		    c[i][j]=0;
			for (k = 0; k <= 2; k++)
			{
				c[i][j] = a[i][j] + b[i][j];
			}
		
		}
	}
	printf("\nAddition Of Two Matrices : \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf(" %d ", c[i][j]);
		}
		printf("\n");
	}
              return 0;
}
