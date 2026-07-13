#include <stdio.h>

int main()
{
    int matrix[3][3];
    int i, j;

    printf("Enter 3x3 Matrix:\n");

    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            scanf("%d", &matrix[i][j]);

    printf("\nTranspose Matrix:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", matrix[j][i]);
        }
        printf("\n");
    }

    return 0;
}