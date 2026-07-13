#include <stdio.h>

float add(float, float);
float subtract(float, float);
float multiply(float, float);
float divide(float, float);

int main()
{
    float a, b;
    int choice;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Result = %.2f\n", add(a, b));
            break;

        case 2:
            printf("Result = %.2f\n", subtract(a, b));
            break;

        case 3:
            printf("Result = %.2f\n", multiply(a, b));
            break;

        case 4:
            if(b != 0)
                printf("Result = %.2f\n", divide(a, b));
            else
                printf("Division by zero is not allowed.\n");
            break;

        default:
            printf("Invalid Choice!\n");
    }

    return 0;
}

float add(float a, float b)
{
    return a + b;
}

float subtract(float a, float b)
{
    return a - b;
}

float multiply(float a, float b)
{
    return a * b;
}

float divide(float a, float b)
{
    return a / b;
}