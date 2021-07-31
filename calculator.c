#include<stdio.h>
int main()
{
	int num1,num2;
	printf("enter number1 and number2\n");
	scanf("%d%d",&num1,&num2);
	char op;
	printf("enter operator\n");
	scanf("%c",&op);
	
	switch(op)
	{
		case '+' :  num1+num2;
		           
		            break;
		default  : printf("wrong operation");            
	}
	
}
