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

    ch = fgetc(fp);
    ch = fgetc(fp);

    printf("Current Position = %ld\n", ftell(fp));

    rewind(fp);

    printf("Position after rewind = %ld\n", ftell(fp));

    fclose(fp);

    return 0;
}