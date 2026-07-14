#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if(argc != 4)
    {
        printf("Usage: ./calc number operator number\n");
        return 1;
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[3]);
    char op = argv[2][0];

    switch(op)
    {
        case '+':
            printf("Result = %d\n", a + b);
            break;

        case '-':
            printf("Result = %d\n", a - b);
            break;

        case '*':
            printf("Result = %d\n", a * b);
            break;

        case '/':
            if(b != 0)
                printf("Result = %d\n", a / b);
            else
                printf("Division by zero!\n");
            break;

        default:
            printf("Invalid Operator\n");
    }

    return 0;
}