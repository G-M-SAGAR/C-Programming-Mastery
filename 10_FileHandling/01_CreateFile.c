#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("sample.txt", "w");

    if(fp == NULL)
    {
        printf("File could not be created.\n");
        return 1;
    }

    printf("File created successfully.\n");

    fclose(fp);

    return 0;
}