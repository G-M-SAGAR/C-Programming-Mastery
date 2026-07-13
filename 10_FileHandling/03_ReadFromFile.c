#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;

    fp = fopen("sample.txt", "r");

    if(fp == NULL)
    {
        printf("Unable to open file.\n");
        return 1;
    }

    printf("File Contents:\n\n");

    while((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fp);

    return 0;
}