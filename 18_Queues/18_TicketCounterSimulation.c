#include <stdio.h>

int main()
{
    char *customers[] =
    {
        "Rahul",
        "Anita",
        "Kiran",
        "Priya"
    };

    printf("Ticket Counter\n\n");

    for(int i = 0; i < 4; i++)
    {
        printf("Serving %s\n", customers[i]);
    }

    return 0;
}