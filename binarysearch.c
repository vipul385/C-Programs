#include<stdio.h>
int Bsearch(int[],int,int);
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
	printf("enter eleemnt to be seach");
	scanf("%d",&item);
	index=Bsearch(a,n,item);
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
int Bsearch(int a[],int size,int item)
{
	int start,end,mid;
	start=0;
	end=size-1;
	{
		while(start<=end)
		{
			mid=(start+end/2);
			if(item==a[mid])
			return mid;
		
		else if(item>a[mid])
		start=mid+1;
		else
		{
			end=mid-1;
		}
	}
	return -1;
}
}
