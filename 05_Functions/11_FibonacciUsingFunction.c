#include <stdio.h>

void fibonacci(int);

int main()
{
    int terms;

    printf("Enter number of terms: ");
    scanf("%d", &terms);

    fibonacci(terms);

    return 0;
}

void fibonacci(int n)
{
    int a = 0, b = 1, c, i;

    printf("Fibonacci Series: ");

    for(i = 1; i <= n; i++)
    {
        printf("%d ", a);

        c = a + b;
        a = b;
        b = c;
    }

    printf("\n");
}