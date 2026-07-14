#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int value)
{
    stack[++top] = value;
}

int pop()
{
    return stack[top--];
}

int main()
{
    char postfix[] = "23+5*";
    int i = 0;

    while(postfix[i] != '\0')
    {
        char ch = postfix[i];

        if(ch >= '0' && ch <= '9')
        {
            push(ch - '0');
        }
        else
        {
            int b = pop();
            int a = pop();

            switch(ch)
            {
                case '+': push(a + b); break;
                case '-': push(a - b); break;
                case '*': push(a * b); break;
                case '/': push(a / b); break;
            }
        }

        i++;
    }

    printf("Result = %d\n", pop());

    return 0;
}