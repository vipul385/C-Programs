#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	printf("enter string\n");
	gets(str);     //input string
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='A'&& str[i]<='Z')
		str[i]=str[i]+32;      //subtract ASCII value to get lowercase
	}
	printf("%s",str);
	return 0;
}
