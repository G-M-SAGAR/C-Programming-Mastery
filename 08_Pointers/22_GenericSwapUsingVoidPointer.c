#include <stdio.h>
#include <string.h>

void swap(void *a, void *b, size_t size)
{
    char temp[size];

    memcpy(temp, a, size);
    memcpy(a, b, size);
    memcpy(b, temp, size);
}

int main()
{
    int x = 10, y = 20;

    printf("Before Swap:\n");
    printf("x = %d y = %d\n", x, y);

    swap(&x, &y, sizeof(int));

    printf("\nAfter Swap:\n");
    printf("x = %d y = %d\n", x, y);

    return 0;
}