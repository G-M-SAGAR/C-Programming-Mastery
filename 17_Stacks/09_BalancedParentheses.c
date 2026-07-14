#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char ch)
{
    stack[++top] = ch;
}

void pop()
{
    if(top != -1)
        top--;
}

int main()
{
    char exp[MAX];

    printf("Enter Expression: ");
    scanf("%s", exp);

    for(int i = 0; exp[i] != '\0'; i++)
    {
        if(exp[i] == '(')
            push('(');
        else if(exp[i] == ')')
        {
            if(top == -1)
            {
                printf("Not Balanced\n");
                return 0;
            }
            pop();
        }
    }

    if(top == -1)
        printf("Balanced Parentheses\n");
    else
        printf("Not Balanced\n");

    return 0;
}