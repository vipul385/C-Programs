   // LARGER AMONG TWO NUMBER
   #include<stdio.h>
   int main()
   {
   	int num1,num2;
   	printf("enter first number\n");
   	printf("enter second number\n");
   	scanf("%d%d",&num1,&num2);
   	if(num1>num2)
   	{
   		printf("first number is larger");
   		
	   }
	   else if(num1==num2)
	   {
	   	printf("both are equal");
	   }
	   else
	   {
	   	printf("second is larger");
	   }
	   return 0;
   }
