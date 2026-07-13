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

    fseek(fp, 10, SEEK_SET);

    ch = fgetc(fp);

    printf("Character at position 10 = %c\n", ch);

    fclose(fp);

    return 0;
}