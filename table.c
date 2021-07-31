#include<stdio.h>
int main()
{
    int num,t;
    printf("enter number \n");
    scanf("%d",&num);
    printf("the table is \n");
    for(int i=1;i<=10;i++)
    {
        t=num*i;
        
        printf(" %d \n",t);
        
    }
    
        
    
    return 0;
}