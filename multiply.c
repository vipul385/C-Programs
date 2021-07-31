#include<stdio.h>
#include<process.h>
int main()
{
	int a[4][4],b[4][4],c[4][4],i,j,m,n,p,q,ip;
	printf("input row & column of A: \n");
	scanf("%d %d",&m,&n);
	printf("input row & column of B: \n");
	scanf("%d %d",&p,&q);
	if(n==q)
	{
		printf("matrices can be multiplied");
		
	}
	else
	{
		printf("can't be multiplied");
		exit(0);
	}
	printf("input A\n");
	for(i=0;i<m;++i)
	{
		for(j=0;j<n;++j)
		scanf("%d",&a[i][j]);
		
		
	}
		printf("input B\n");
	for(i=0;i<p;++i)
	{
		for(j=0;j<q;++j)
		scanf("%d",&b[i][j]);
		
		
	}
		for(i=0;i<m;++i)
		for(j=0;j<q;++j)
		{
			c[i][j]=0;
			for(ip=0;ip<n;++ip)
			c[i][j]+=(a[i][j]*b[i][j]);
		}
		printf("product of A and B \n");
		for(i=0;i<m;++i)
		{
			for(j=0;j<q;++j)
			printf("%d",c[i][j]);
		}
	
	return 0;
}
