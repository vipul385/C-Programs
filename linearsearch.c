#include<stdio.h>
int Lsearch(int [],int ,int);
int main()

{
	int a[5],item,n,index;
	printf("enter array size");
	scanf("%d",&n);
	printf("enter array elements");
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	printf("enter eleemnt to be seach");
	scanf("%d",&item);
	index=Lsearch(a,n,item);
	if(index==-1)
	{
		printf("not found");
	}
	else
	{
		printf("element found at index: %d position %d",index,index+1);
		
	}
	return 0;
}
int Lsearch(int a[], int size, int item)
{
	int i;
	for(i=0;i<size;i++)
	{
	if(a[i]==item)
	return i;
	}
	return -1;
}
