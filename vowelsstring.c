#include<stdio.h>
#include<string.h>
int main()
{
	char str[10];
	int count=0;
	printf("enter string\n");
	gets(str);
	int i;
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]=='a'||str[i]=='i'||str[i]=='o'||str[i]=='e'||str[i]=='u'||str[i]=='A'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='E')
		{
		count++;
		}
		
		
	}
	printf("%d",count);
	
	return 0;
}
