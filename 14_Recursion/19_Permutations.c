#include <stdio.h>
#include <string.h>

void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

void permute(char str[], int left, int right)
{
    if(left == right)
    {
        printf("%s\n", str);
        return;
    }

    for(int i = left; i <= right; i++)
    {
        swap(&str[left], &str[i]);

        permute(str, left + 1, right);

        swap(&str[left], &str[i]);
    }
}

int main()
{
    char str[20];

    printf("Enter string: ");
    scanf("%s", str);

    printf("\nPermutations:\n");

    permute(str, 0, strlen(str) - 1);

    return 0;
}