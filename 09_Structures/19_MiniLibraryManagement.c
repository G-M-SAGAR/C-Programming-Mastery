#include <stdio.h>

struct Book
{
    int id;
    char title[50];
    char author[50];
};

int main()
{
    struct Book books[3];
    int i;

    printf("Enter details of 3 books:\n");

    for(i = 0; i < 3; i++)
    {
        printf("\nBook %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &books[i].id);

        printf("Title: ");
        scanf("%49s", books[i].title);

        printf("Author: ");
        scanf("%49s", books[i].author);
    }

    printf("\n===== Library Records =====\n");

    for(i = 0; i < 3; i++)
    {
        printf("\nBook ID : %d\n", books[i].id);
        printf("Title   : %s\n", books[i].title);
        printf("Author  : %s\n", books[i].author);
    }

    return 0;
}