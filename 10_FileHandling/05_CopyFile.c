#include <stdio.h>

int main()
{
    FILE *source, *destination;
    char ch;

    source = fopen("sample.txt", "r");

    if(source == NULL)
    {
        printf("Source file not found.\n");
        return 1;
    }

    destination = fopen("copy.txt", "w");

    if(destination == NULL)
    {
        printf("Destination file could not be created.\n");
        fclose(source);
        return 1;
    }

    while((ch = fgetc(source)) != EOF)
    {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    printf("File copied successfully.\n");

    return 0;
}