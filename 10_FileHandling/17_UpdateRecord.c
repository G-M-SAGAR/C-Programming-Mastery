#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("sample.txt", "r+");

    if(fp == NULL)
    {
        printf("Unable to open file.\n");
        return 1;
    }

    fseek(fp, 0, SEEK_END);

    fprintf(fp, "\nUpdated Record.");

    fclose(fp);

    printf("Record updated successfully.\n");

    return 0;
}