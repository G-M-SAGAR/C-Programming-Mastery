#include <stdio.h>

int main()
{
    char *jobs[] =
    {
        "Document.pdf",
        "Assignment.docx",
        "Photo.jpg"
    };

    printf("Printer Queue\n\n");

    for(int i = 0; i < 3; i++)
    {
        printf("Printing : %s\n", jobs[i]);
    }

    printf("\nAll Print Jobs Completed.\n");

    return 0;
}