//C PROGRAM COMPOUND INTEREST 
#include<stdio.h>
#include<math.h>
int main()
{
	int p,t,n;
	float r;
	printf("enter principal rate  and time");
	scanf("%d %f %d",&p,&r,&t);
	float ci;
	ci=(float)p*(pow(1+(r/100),t))-p;
	printf("value of compound interest %f",ci);
	return 0;
	
	
}
