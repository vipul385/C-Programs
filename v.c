#include <stdio.h>
#include <conio.h>
#include <math.h>
#define br printf("\n")
#define readi(a) scanf("%d", &a)
#define readf(a) scanf("%f", &a)
#define readc(a) scanf("%c", &a)
#define reads(a) scanf("%s", &a)
#define readarr(a, n)           \
    for (int i = 0; i < n; i++) \
    {                           \
        readi(a[i]);            \
    }
#define printarr(a, n)          \
    for (int i = 0; i < n; i++) \
    {                           \
        printf("%d ", a[i]);    \
    }

int main()
{
    char name[10000];
    printf("Enter the name of the person: ");
    gets(name);
    int age, salary;
    printf("Enter the age of the person: ");
    readi(age);
    printf("Enter the salary of the person: ");
    readi(salary);

    FILE *fileptr;
    fileptr = fopen("info.txt", "w");
    fprintf(fileptr, "Name:%s\nAge:%d\nSalary:%d", name, age, salary);
    printf("Data is written successfully!");
    // char data[100];
    // fscanf(fileptr, "%s", data);
    // printf("%s", data);
    fclose(fileptr);
}
