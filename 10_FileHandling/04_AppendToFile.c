#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("sample.txt", "a");

    if(fp == NULL)
    {
        printf("Unable to open file.\n");
        return 1;
    }

    fprintf(fp, "This line is appended.\n");

    fclose(fp);

    printf("Data appended successfully.\n");

    return 0;
}