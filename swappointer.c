 // SWAP USING POINTERS
#include<stdio.h>
 int swap(int *x,int *y)  //function for swapping
 {
 	int temp;   //declare temporary variable 
 	temp=*x;
 	*x=*y;
 	*y=temp;
 }
 
 int main()
 {
 	int num1,num2;
 	printf("enter first number: \n");  // input number 1
 	scanf("%d",&num1);
 	printf("enter second number: \n");  //input number 1
 	scanf("%d",&num2);
 	printf("Numbers before swapping: num1 is %d , num2 is %d \n",num1,num2);
 	swap(&num1,&num2);
 	printf("Numbers after swapping: num1 is %d , num2 is %d \n",num1,num2);
 	return 0;
 	
 }
