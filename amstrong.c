#include<stdio.h>
int main()
{
    int num,sum=0;
    int count=0;
    printf("enter number \n");
    scanf("%d",&num);
    int x=num;
    // int k=num;
    // while(num>0)
    // {
    //     num=num/10;
    //     count++;
    // }
    // printf("Number of digits: %d", count);
    if(num!=0)
    {
        for(int i=1;i<=3;i++)
        {
            int last=x%10;
            sum+=last*last*last;
            // printf("%d\n",sum);
            x=x/10;
        }

        

        printf("the sum is %d\n",sum);
    
        if(sum==num)
        {
            printf("it is an armstrong number",num);

        }
        else
        
           printf("it is not an armstrong number ",num);
        
        
    }
    return 0;

    }
    