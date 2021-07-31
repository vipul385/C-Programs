#include<stdio.h>
int foo(int n,int sum)
{
	int k=0,j=0;
	if(n==0)
	return;
	k=n%10;
	j=n/10;
	sum=sum+k;
	foo(j,sum);
	return sum;
	
}
int main()
{
int a=2048,sum=0;
sum=foo(a,sum);
printf("%d",sum);
	
}
