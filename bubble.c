#include<stdio.h>
void Bubblesort(int[],int);
int main()
{

	int a[10],item,n,index;
	printf("enter array size");
	scanf("%d",&n);
	printf("enter array elements");
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	Bubblesort(a,n);
	printf("sorted array is");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
return 0;	
}
void Bubblesort(int a[],int size)
{
	int temp,c=0;
	int i;
	for(i=0;i<size;i++)
	{   int j;
		for(j=0;i<size-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
			printf("array after %d is",++c);
			int k;
			for(k=0;k<size;k++)
			{
				printf("%d \n",a[k]);
			}
		}
	}
	
}
