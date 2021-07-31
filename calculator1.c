  //CALCULATOR USING SWITCH
#include <stdio.h>
int main()
{
    int num1,num2;
    float result;
    char op;    //to store operator 
     
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
     
    printf("Choose operation to perform (+,-,*,/,%): ");
    scanf(" %c",&op);
     
    result=0;
    switch(op)    
    {
        case '+':
            result=num1+num2;
            break;
             
        case '-':
            result=num1-num2;
            break;
         
        case '*':
            result=num1*num2;
            break;
             
        case '/':
            result=(float)num1/(float)num2;
            break;
             
        case '%':
            result=num1%num2;
            break;
        default:
            printf("Invalid operation.\n");
            break;
    }
 
    printf("Result: %d %c %d = %f\n",num1,op,num2,result);
    return 0;
}
