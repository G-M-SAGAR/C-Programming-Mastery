#include <stdio.h>

int main()
{
    int arr1[5], arr2[5], merged[10];
    int i;

    printf("Enter 5 elements for First Array:\n");

    for(i = 0; i < 5; i++)
        scanf("%d", &arr1[i]);

    printf("Enter 5 elements for Second Array:\n");

    for(i = 0; i < 5; i++)
        scanf("%d", &arr2[i]);

    for(i = 0; i < 5; i++)
        merged[i] = arr1[i];

    for(i = 0; i < 5; i++)
        merged[i + 5] = arr2[i];

    printf("\nMerged Array:\n");

    for(i = 0; i < 10; i++)
        printf("%d ", merged[i]);

    printf("\n");

    return 0;
}