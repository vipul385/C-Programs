#include <math.h>
#include <stdio.h>

int main() {
	int num,ans=0;
	printf("enter decimal number");
	scanf("%d",&num);
	while(num/2)
	{
		ans=(ans*10)+(num%2);
		num=num/2;
	}
	if(num/2==0)
	{
		ans=(ans*10)+(num%2);
	}
	printf("%d",ans);
	return 0;
	}

