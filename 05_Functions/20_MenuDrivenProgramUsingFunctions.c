#include <stdio.h>

void square();
void cube();

int main()
{
    int choice;

    do
    {
        printf("\n===== MENU =====\n");
        printf("1. Find Square\n");
        printf("2. Find Cube\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                square();
                break;

            case 2:
                cube();
                break;

            case 3:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 3);

    return 0;
}

void square()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    printf("Square = %d\n", n * n);
}

void cube()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    printf("Cube = %d\n", n * n * n);
}