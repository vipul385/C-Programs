#include<stdio.h>
#include<math.h>
int main()
{ 

int binary,k,count=0;
printf("enter binary");
scanf("%d",&binary);
while(binary!=0)
{
	binary=binary/10;
	count++;
}
while(binary!=0)
{   

	k=binary%10;
	int i;
	for(i=0;i<=count;i++)
	{
	
	
	k*pow(2,i);
	
}
	binary=binary/10;
}
printf("decimal is %d",k);

return 0;
	
}
