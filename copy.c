/* C program to copy contents of one file to another */

// Preprocessors
#include <stdio.h>
#include <stdlib.h>

// Main File
int main()
{
    printf("\nRoll Number-2K20/A11/23\nName-Vipul\n"); //Name and Roll Number

    FILE *sourceFile;
    FILE *destFile;

    char sourcePath[100];
    char destPath[100];

    char ch;

    /* Input path of files to copy */
    printf("\nEnter Source Pile Path: ");
    scanf("%s", sourcePath);
    printf("\nEnter Destination File Path: ");
    scanf("%s", destPath);

    /* 
     * Open Source File in 'Read' mode 
     * Open Destination File in 'Write' mode 
     */
    
    sourceFile  = fopen(sourcePath, "r");
    destFile    = fopen(destPath,   "w");

    /* fopen() return NULL if unable to open file in given mode. */
    if (sourceFile == NULL || destFile == NULL)
    {
        /* Unable to open file hence exit */
        printf("\nUnable to open file.\n");
        printf("Please check if file exists and you have read/write privilege.\n");

        exit(EXIT_FAILURE);
    }


    /*
     * Copy file contents character by character.
     */
    ch = fgetc(sourceFile);

    while (ch != EOF)
    {
        /* Write to destination file */
        fputc(ch, destFile);

        /* Read next character from source file */
        ch = fgetc(sourceFile);
    }


    printf("\nFiles Data Copied Successfully.\n");


    /* Finally close files to release resources */
    fclose(sourceFile);
    fclose(destFile);

    return 0;
}

