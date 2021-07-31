// EMPLOYEE DETAILS USING STRUCTURE
#include<stdio.h>
struct employee
{
	int id;
	char name[20];
	float salary;
	int age;
};

int main()
{   struct employee e1;     /*declare structure variable*/
	int i,n;
	/*read employee details*/
	printf("\nEnter details :\n");
    printf("Name ?: ");          
	gets(e1.name);
    printf("ID ?: ");            
	scanf("%d",&e1.id);
    printf("Salary ?: ");        
	scanf("%f",&e1.salary);
	printf("Age ?:  ");
	scanf("%d",&e1.age);
	
	/*print employee details*/
	printf("\nEntered detail is: \n");
    printf("Name: %s \n",e1.name);
    printf("Id: %d \n",e1.id);
    printf("Salary: %f\n",e1.salary);
    printf("Age : %d",e1.age);
		
    return 0;
}
