#include<stdio.h>
#include<string.h>
int xstrlen(char str[10])
{
	int count=0;
	int i=0;
    while(str[i]!='\0')  //TO READ STRING
	{
		count++;
		i++;
		
	}	
		printf("Length of string is: %d ",count);  //PRINT COUNT
	
		return 0;
}
int main()
  {
  	char str[10];
	printf("enter string\n");
	gets(str);      //STRING INPUT
  	xstrlen(str);   //FUNCTION CALL
	return 0;
	
  }
