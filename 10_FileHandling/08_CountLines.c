#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;
    int lines = 0;

    fp = fopen("sample.txt", "r");

    if(fp == NULL)
    {
        printf("Unable to open file.\n");
        return 1;
    }

    while((ch = fgetc(fp)) != EOF)
    {
        if(ch == '\n')
        {
            lines++;
        }
    }

    fclose(fp);

    printf("Total Lines = %d\n", lines);

    return 0;
}