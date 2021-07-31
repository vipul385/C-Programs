  // average of two numbers
#include<stdio.h>
int main()
{
	int num1,num2;
	int sum;
	float avg;
	printf("enter number 1\n"); //input
	printf("enter number 2\n"); //input
	scanf("%d",&num1);
	scanf("%d",&num2);
	sum=num1+num2;
	printf("value of sum is %d",sum);
	avg=(float)(sum)/2;   //formula of average
	printf("value of average is %f",avg);
	return 0;
}
