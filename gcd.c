#include<stdio.h>
int gcd(int a, int b)
{
	int hcf;
	int i;
	for(i=1;i<=a && i<=b;i++)
	{
	
		if(a%i==0&&b%i==0)
		hcf=i;
	}
	return hcf;
}
int main()
{
	int num1,num2;
	printf("enter numbers\n");
	scanf("%d%d",&num1,&num2);
	int s;
	s=gcd(num1,num2);
	printf("gcd is %d",s);
	return 0;
}
