#include <stdio.h>

int main()
{
    int choice, a, b;
    float result;

    printf("===== MINI PRACTICE PROGRAM =====\n");
    printf("1. Add Two Numbers\n");
    printf("2. Subtract Two Numbers\n");
    printf("3. Multiply Two Numbers\n");
    printf("4. Divide Two Numbers\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    if(choice == 1)
    {
        result = a + b;
        printf("Sum = %.2f\n", result);
    }
    else if(choice == 2)
    {
        result = a - b;
        printf("Difference = %.2f\n", result);
    }
    else if(choice == 3)
    {
        result = a * b;
        printf("Product = %.2f\n", result);
    }
    else if(choice == 4)
    {
        if(b != 0)
        {
            result = (float)a / b;
            printf("Quotient = %.2f\n", result);
        }
        else
        {
            printf("Error: Division by zero not allowed!\n");
        }
    }
    else
    {
        printf("Invalid choice!\n");
    }

    return 0;
}