#include <stdio.h>
#include <string.h>

int main()
{
  	char str1[100], str2[100];
  	int result=0, i,j;
 
  	printf("\n Please Enter the First String :  ");
  	gets(str1);     //input string 1
  	
  	printf("\n Please Enter the Second String :  ");
  	gets(str2);     //input string 2
	  
  	for(i=0;i<strlen(str1);i++)    // for loop tranverse str 1
  	{
	  
  	if(str1[i]!=str2[i])         // if condition
  	{
  			result=1;
			  break;	
	  }
}


 if(result==0)
 {
 	printf("\n str1 is Equal to str2");
 }
 else
 {
 	printf("\n str1 is not Equal to str2");
 }
  	
return 0;
  }
	  
