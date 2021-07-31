#include<stdio.h>
int main()
{
    int n,flag=0;
    printf("enter number\n");
    scanf("%d",&n);
    if(n%2==0){
    	printf("prime");
	}
	if(n<=1)
	{
		printf("neither prime nor composite");
		return 0;
	}
	int i;
    for(i=2;i<=n/2;i++)
    {
    if(n%i==0){
    flag=1;
    break;
    }
    }
    if(n==1)
    {
        printf("1 is not composite or prime");
    }
    else{
        if(flag==0)
        {
            printf("%d is a prime number",n);
        }
    else{
            printf("%d is not a prime number",n);
        }
        
    }
    
    
    return 0;
}
