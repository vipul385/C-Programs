#include<stdio.h>
int main()
{
	int a,b;
	int temp;
	printf("enter values of a and b");
	scanf("%d %d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("number after swapping %d %d",a,b);
	
	return 0;
}
