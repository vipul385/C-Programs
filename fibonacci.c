#include<stdio.h>
int main()
{
    int next,n,first=0,second=1;
    next=first+second;
    printf("enter number of terms\n");
    scanf("%d",&n);
    printf("fibonacci series of %d  %d\t",first ,second);
    int i;
    for(i=2;i<=n;i++)
    {
        printf("%d \t",next);
        first=second;
        second=next;
        next=first+second;
    }
    return 0;
    }
