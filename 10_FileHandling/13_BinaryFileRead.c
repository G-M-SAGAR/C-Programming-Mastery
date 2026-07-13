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

    fp = fopen("students.dat", "rb");

    if(fp == NULL)
    {
        printf("Unable to open binary file.\n");
        return 1;
    }

    while(fread(&s, sizeof(struct Student), 1, fp) == 1)
    {
        printf("Roll  : %d\n", s.roll);
        printf("Name  : %s\n", s.name);
        printf("Marks : %.2f\n\n", s.marks);
    }

    fclose(fp);

    return 0;
}