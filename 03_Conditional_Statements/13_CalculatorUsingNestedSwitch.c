#include <stdio.h>

int main()
{
    int choice;
    char operation;
    float num1, num2;

    printf("===== Calculator =====\n");
    printf("1. Arithmetic Operations\n");
    printf("2. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("\nChoose Operation (+, -, *, /): ");
            scanf(" %c", &operation);

            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);

            switch(operation)
            {
                case '+':
                    printf("Result = %.2f\n", num1 + num2);
                    break;

                case '-':
                    printf("Result = %.2f\n", num1 - num2);
                    break;

                case '*':
                    printf("Result = %.2f\n", num1 * num2);
                    break;

                case '/':
                    if(num2 != 0)
                        printf("Result = %.2f\n", num1 / num2);
                    else
                        printf("Division by zero is not allowed.\n");
                    break;

                default:
                    printf("Invalid Operation!\n");
            }
            break;

        case 2:
            printf("Exiting Program...\n");
            break;

        default:
            printf("Invalid Choice!\n");
    }

    return 0;
}