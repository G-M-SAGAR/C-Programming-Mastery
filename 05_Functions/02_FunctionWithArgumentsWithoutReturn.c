#include <stdio.h>
void add(int, int);

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    add(a, b);   // Function Call

    return 0;
}

// Function Definition
void add(int x, int y)
{
    printf("Sum = %d\n", x + y);
}