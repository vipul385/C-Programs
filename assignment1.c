#include<stdio.h>
#include<string.h>

int countupper(char str[100])  // Function To count uppercase letters
{
	int i,upper=0;
	for(i=0;str[i]!='\0';i++)
	if(str[i]>=65 && str[i]<=90)   //ASCII Value of uppercase
	{
		upper++;
		
		
	}
	printf("Number of uppercase characters: %d \n",upper);
	
		
}
int countlower(char str[100])  //Function To count lowercase letters
{
	int i,lower=0;
	for(i=0;str[i]!='\0';i++)
	if(str[i]>=97 && str[i]<=122)  //ASCII value of lowercase
	{
		lower++;
		
		
	}
	printf("\n");
	printf("Number of lowercase characters: %d \n",lower);
	
		
}
int countnum(char str[100])  //Function To count Numerals
{
	int i,num=0;
	for(i=0;str[i]!='\0';i++)
	if(str[i]>=48 && str[i]<=57)    //ASCII Value of numerals
	{
		num++;
		
		
	}
	printf("\n");
	printf("Number of Numerals: %d \n",num);
	
		
}
int countsnum(char str[100])  //Function To count special characters
{
	int i,num=0;
	for(i=0;str[i]!='\0';i++)
	if(str[i]>=32 && str[i]<=47||str[i]>=58 && str[i]<=64||str[i]>=91 && str[i]<=96||str[i]>=123 && str[i]<=126)   //ASCII Value os special characters
	{
		num++;
		
		
	}
	printf("\n");
	printf("Number of Special characters: %d \n",num);
	
		
}
int printnum(char str[100])  //Function to print Numerals
{
	int i;
	for(i=0;str[i]!='\0';i++)
	if(str[i]>='0' && str[i]<='9')
	{
		printf("%c,",str[i]);
		
		
	}
	
	
		
}

char printlower(char str[100])  //Function to print Lowecase letters
{
	int i;
	for(i=0;str[i]!='\0';i++)
	if(str[i]>='a' && str[i]<='z')
	{
		printf("%c,",str[i]);
		
		
	}
	
	
		
}
char printupper(char str[100])  //Function to print uppercase letters
{
	int i;
	for(i=0;str[i]!='\0';i++)
	if(str[i]>='A' && str[i]<='Z')
	{
		printf("%c,",str[i]);
	}

	
}
char printsnum(char str[100])  //Function to print special characters
{
	int i,num=0;
	for(i=0;str[i]!='\0';i++)
	if(str[i]>=32 && str[i]<=47||str[i]>=58 && str[i]<=64||str[i]>=91 && str[i]<=96||str[i]>=123 && str[i]<=126)
	{
		
		printf("%c,",str[i]);
		
	}		
}



int main()  //Starting of program
{
	char str[100];
	printf("enter string: \n");
	gets(str);
	countupper(str);                        //Function Call
	printf("Uppercase characters: ");
	printupper(str);                        //Function Call
	countlower(str);                        //Function Call
	printf("lowercase characters: ");
	printlower(str);                        //Function Call
	countnum(str);                          //Function Call
	printf("Numerals: ");
	printnum(str);                          //Function Call
	countsnum(str);                         //Function Call
	printf("Special characters: ");
	printsnum(str);                         //Function Call
	return 0;
	
	
}
