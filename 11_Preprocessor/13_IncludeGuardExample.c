#include <stdio.h>
#include "myheader.h"

void displayMessage()
{
    printf("Header File Included Successfully.\n");
}
#include "myheader.h"

int main()
{
    displayMessage();

    return 0;
}