/* Program to create a file with filename emp.txt */
/* Store information about a person, in terms of his Name, Age and Salary */

// Header File
#include <stdio.h>
#include <stdlib.h>

// Main Function
int main()
{
    printf("\nRoll Number-2K20/A11/23\nName-Vipul\n\n"); //Name and Roll Number

    // Declaring File Pointer
    FILE *fp;

    char another = 'Y';

    // Declaring Structure
    struct emp
    {
        char name[40];
        int age;
        float sal;
    };

    // Structure 'emp' Name - 'e'
    struct emp e;

    // Opening File (Writing Mode)
    fp = fopen("emp.txt", "w");

    if (fp == NULL)
    {
        puts("Cannot Open File");
        exit(1);
    }

    while (another == 'Y')
    {
        // Getting Name, Age, Salary as Input from User
        printf("\nEnter Name, Age and Salary: \n");
        scanf("%s %d %f", e.name, &e.age, &e.sal); // Storing into Structure

        // Writing into File
        fprintf(fp, "%s %d %f\n", e.name, e.age, e.sal);

        printf("\nAdd another record (Y/N) ");

        fflush(stdin);

        another = getchar();
    }

    fclose(fp);

    return 0;
}

