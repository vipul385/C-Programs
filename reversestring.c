#include<stdio.h>
#include<string.h>
char rev(char str[10])   //function to reverse a string
{
    int len=strlen(str);
    char temp;
    int i;
    for(i=0;i<len;i++)
    { 
      temp=str[i];
      str[i]=str[len-1];
      str[len-1]=temp;
      len--;
    }
}
int main()
{
    char str[10];
    printf("enter string: \n");
    gets(str);           //string input
    rev(str);            //function call
    printf("%s",str);
    return 0;
}

