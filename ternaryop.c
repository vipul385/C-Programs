 //ternary operator largest among three number
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter values of a b and c");
	scanf("%d%d%d",&a,&b,&c);
	a>b ? a>c ? printf("largest is %d",a): printf("largest is %d",c): b>c? printf("largest is %d",b): printf("largest is %d",c);
	return 0;
}
