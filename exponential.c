#include<stdio.h>
#include<math.h>
int fact(int n)

{ 
    int factorial=1;
    int i;
    for(i=1;i<=n;i++)
    {
        factorial=factorial*i;
    }
    return factorial;
}
float expn(int x,int n)
{
	float a=((float)pow(x,n)/(float)fact(n));
	return a;
}
int main()
{
    int x,ans=0;
    printf("enter value of x \n");
    scanf("%d ",&x);
    int i;
    for(i=0;i<5;i++)
    {
	
   ans+=expn(x,i);
}
   printf("answer is %d",ans);
    return 0;
}
