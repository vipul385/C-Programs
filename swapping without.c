   // C PROGRAM SWAPPING WITHOUT USING TEMP
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter values of a and b");
	scanf("%d %d",&a,&b);
	a=a+b; //sum of a and b
	b=a-b;
	a=a-b;
	printf("after swapping %d %d",a,b);
	return 0;
	
}
