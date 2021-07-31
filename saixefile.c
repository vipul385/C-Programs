/* C Program to Find the Size of File using File Handling Function */

// Header Files
#include <stdio.h>

// Main Function
void main()
{
    printf("\nRoll Number-2K20/A11/23\nName-Vipul\n"); //Name and Roll Number

    // File Pointer
    FILE *fp;

    char sourcePath[100];

    char ch;

    // Initial Size = 0
    int size = 0;

    /* Input Path of Files */
    printf("\nEnter Source Pile Path: ");
    scanf("%s", sourcePath);

    fp = fopen(sourcePath, "r");

    if (fp == NULL)
        printf("\nFile Unable to Open ");
    else
        printf("\nFile Opened ");

    fseek(fp, 0, 2);  /* File Pointer at the End of File */
    size = ftell(fp); /* Take a position of File Pointer UN Size Vvariable */

    printf("\n\nThe size of given file is : %d\n", size);

    fclose(fp);
}

