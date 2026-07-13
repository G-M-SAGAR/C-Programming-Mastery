#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;
    int count = 0;

    fp = fopen("sample.txt", "r");

    if(fp == NULL)
    {
        printf("Unable to open file.\n");
        return 1;
    }

    while((ch = fgetc(fp)) != EOF)
    {
        count++;
    }

    fclose(fp);

    printf("Total Characters = %d\n", count);

    return 0;
}