/* Program to Read a File and after converting all Lower Case to Upper Case Letters Write it to Another File */

// Header Files
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Main Function
int main()
{
    printf("\nRoll Number-2K20/A11/23\nName-Vipul\n"); //Name and Roll Number
    
    // Declaring File Pointers
    FILE *fp1, *fp2;

    char ch;

    // File Name String
    char sourcePath[100];
    char destPath[100];

    /* Input Path of Files */
    printf("\nEnter Source Pile Path: ");
    scanf("%s", sourcePath);
    printf("\nEnter Destination File Path: ");
    scanf("%s", destPath);

    fp1 = fopen(sourcePath, "r");
    if (fp1 == NULL)
    {
        puts("File does not exist..");
        exit(1);
    }

    fp2 = fopen(destPath, "w");
    if (fp2 == NULL)
    {
        puts("File does not exist..");
        fclose(fp1);
        exit(1);
    }

    while ((ch = fgetc(fp1)) != EOF)
    {
        ch = toupper(ch);
        fputc(ch, fp2);
    }

    printf("\nFile Successfully Edited..");

    /* Finally close files to release resources */
    fclose(fp1);
    fclose(fp2);

    return 0;
}

