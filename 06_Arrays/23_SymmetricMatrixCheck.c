#include <stdio.h>

int main()
{
    int matrix[3][3];
    int i, j;
    int symmetric = 1;

    printf("Enter 3x3 Matrix:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(matrix[i][j] != matrix[j][i])
            {
                symmetric = 0;
                break;
            }
        }

        if(!symmetric)
            break;
    }

    if(symmetric)
        printf("Matrix is Symmetric.\n");
    else
        printf("Matrix is NOT Symmetric.\n");

    return 0;
}