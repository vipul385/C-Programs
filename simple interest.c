// PROGRAM TO CALCULATE SIMPEL INTEREST
#include<stdio.h>
int main()
{
	int p,r,t;
	float s;
	printf("enter values of principal,rate and time");
	scanf("%d%d%d",&p,&r,&t);
	s=(float)p*r*t/100;  //explicit type casting
	printf("value of simple interest is %f",s);
	return 0;
	
}
