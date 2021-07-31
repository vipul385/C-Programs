 // LARGER AMONG THREE NUMBER
   #include<stdio.h>
   int main()
   {
   	int num1,num2,num3;
   	printf("enter first number\n");
   	printf("enter second number\n");
   	printf("enter third number\n");
   	scanf("%d%d%d",&num1,&num2,&num3);
   	if(num1>num2 && num1>num3)
   	{
   		printf("first number is larger");
   		
	   }
	   else if(num2>num1 && num2>num3)
	   {
	   	printf("second is larger");
	   }
	   else 
	   {
	   	printf("third largest");
	   }
	   return 0;
   }
