#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    FILE *fp;
    struct Student s;

    fp = fopen("students.dat", "wb");

    if(fp == NULL)
    {
        printf("Unable to create binary file.\n");
        return 1;
    }

    printf("Enter Roll Number: ");
    scanf("%d", &s.roll);

    printf("Enter Name: ");
    scanf("%49s", s.name);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    fwrite(&s, sizeof(struct Student), 1, fp);

    fclose(fp);

    printf("Record written successfully.\n");

    return 0;
}