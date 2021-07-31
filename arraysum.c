#include <stdio.h>
float *sum(int *a,int n)  //function to sum average
{
int sum=0, i;

for(i=0;i<n;i++)
{
sum +=*a;
a++;
}
printf("sum is %d \n"  ,sum);
//avg=avg/n;    
//printf("average is %f",avg);
//return &avg;
}
int main()
{
int a[20],n,i;
printf("enter number of elements: \n");    //size of array you want
scanf("%d",&n);
for(i=0;i<n;i++){
printf("enter %d element :",i+1);
scanf("%d",&a[i]);
}
float *arr=sum(a,n);   //fuction call
return 0;
}




