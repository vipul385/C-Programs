#include<stdio.h>
void bubblesort(int[],int);
int main()
{
		int a[20],item,n,index;
	printf("enter array size");
	scanf("%d",&n);
	printf("enter array elements");
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	bubblesort(a,n);
	for(i=0;i<n;i++)
	{
	
	printf("%d \n",a[i]);
}
	return 0;
}

void bubblesort(int a[], int size)
{
	int i,temp;
	for(i=0;i<size;i++)
	{
		int j;
		for(j=0;j<size-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}

	
}
