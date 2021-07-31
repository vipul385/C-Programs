#include<stdio.h>
#include<string.h>
char checkpalin(char str[200])   //function to check palindrome
{
	int len=strlen(str);
	int flag=0;
	int i;
	for(i=0;i<len;i++)
	{
		if(str[i]!=str[len-i-1])
		{
			flag=1;
			break;	
		}	
	}
   if(flag==0)
   {
   	printf("%s is palindrome",str);
   }
   else
	{
		printf("%s not palindrome",str);
	}
   return 0;
}
int main()    //starting of program
{
	char str1[200];
	printf("enter string\n");
	gets(str1);    //input string
	int flag;
	checkpalin(str1);    //function call
	return 0;
	
}
