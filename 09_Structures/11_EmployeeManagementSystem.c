#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee emp[3];
    int i;

    printf("Enter details of 3 employees:\n");

    for(i = 0; i < 3; i++)
    {
        printf("\nEmployee %d\n", i + 1);

        printf("ID: ");
        scanf("%d", &emp[i].id);

        printf("Name: ");
        scanf("%49s", emp[i].name);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    printf("\n===== Employee Details =====\n");

    for(i = 0; i < 3; i++)
    {
        printf("\nID     : %d\n", emp[i].id);
        printf("Name   : %s\n", emp[i].name);
        printf("Salary : %.2f\n", emp[i].salary);
    }

    return 0;
}