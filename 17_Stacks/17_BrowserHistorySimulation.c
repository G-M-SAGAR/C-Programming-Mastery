#include <stdio.h>

#define MAX 5

char *history[MAX] =
{
    "google.com",
    "github.com",
    "openai.com"
};

int top = 2;

int main()
{
    printf("Current Page : %s\n", history[top]);

    top--;

    printf("Back : %s\n", history[top]);

    top++;

    printf("Forward : %s\n", history[top]);

    return 0;
}