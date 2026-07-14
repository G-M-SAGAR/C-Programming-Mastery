#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int n, i, choice;

    printf("Enter size of array: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    if(arr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    do
    {
        printf("\n===== MENU =====\n");
        printf("1. Enter Elements\n");
        printf("2. Display Elements\n");
        printf("3. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter %d elements:\n", n);
                for(i = 0; i < n; i++)
                {
                    scanf("%d", &arr[i]);
                }
                break;

            case 2:
                printf("Array Elements:\n");
                for(i = 0; i < n; i++)
                {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 3:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 3);

    free(arr);

    return 0;
}