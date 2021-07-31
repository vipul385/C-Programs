//19-07-2021
//2k20-a11-03
#include<stdio.h>
struct info
{
	char name[20];
	int age;
	float salary;
};
int main()
{
	struct info per1;
	FILE *ptr;
	fopen("ehp.txt","w");
	printf("Enter the name of person\t");
	gets(per1.name);
	printf("Enter the age of person\t");
	scanf("%d",&per1.age);
	printf("Enter the salary of person\t");
	scanf("%f",&per1.salary);
	fprintf(ptr,"Name of the person is %s\n",per1.name);
	fprintf(ptr,"Age of the person is %d\n",per1.age);
	fprintf(ptr,"Salary of the person is %f\n",per1.salary);
	fclose(ptr);
}
