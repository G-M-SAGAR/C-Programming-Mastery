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

    fp = fopen("students.txt", "r");

    if(fp == NULL)
    {
        printf("Unable to open file.\n");
        return 1;
    }

    printf("===== Student Records =====\n\n");

    while(fscanf(fp, "%d %49s %f", &s.roll, s.name, &s.marks) == 3)
    {
        printf("Roll  : %d\n", s.roll);
        printf("Name  : %s\n", s.name);
        printf("Marks : %.2f\n\n", s.marks);
    }

    fclose(fp);

    return 0;
}