#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("sample.txt", "w");

    if(fp == NULL)
    {
        printf("Unable to open file.\n");
        return 1;
    }

    fprintf(fp, "Welcome to C Programming.\n");
    fprintf(fp, "This file is created using fprintf().\n");

    fclose(fp);

    printf("Data written successfully.\n");

    return 0;
}