#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char ch)
{
    stack[++top] = ch;
}

char pop()
{
    return stack[top--];
}

int main()
{
    char str[MAX];

    printf("Enter a String: ");
    scanf("%s", str);

    int len = strlen(str);

    for(int i = 0; i < len; i++)
    {
        push(str[i]);
    }

    printf("Reversed String: ");

    while(top != -1)
    {
        printf("%c", pop());
    }

    printf("\n");

    return 0;
}