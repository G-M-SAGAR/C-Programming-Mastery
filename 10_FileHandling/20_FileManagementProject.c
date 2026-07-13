#include <stdio.h>

int main()
{
    FILE *fp;
    char name[50];
    int age;

    fp = fopen("records.txt", "a");

    if(fp == NULL)
    {
        printf("Unable to open file.\n");
        return 1;
    }

    printf("Enter Name: ");
    scanf("%49s", name);

    printf("Enter Age: ");
    scanf("%d", &age);

    fprintf(fp, "%s %d\n", name, age);

    fclose(fp);

    printf("Record saved successfully.\n");

    return 0;
}