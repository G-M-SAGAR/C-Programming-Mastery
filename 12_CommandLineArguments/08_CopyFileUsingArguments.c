#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *source, *destination;
    char ch;

    if(argc != 3)
    {
        printf("Usage: ./copy source.txt destination.txt\n");
        return 1;
    }

    source = fopen(argv[1], "r");

    if(source == NULL)
    {
        printf("Cannot open source file.\n");
        return 1;
    }

    destination = fopen(argv[2], "w");

    if(destination == NULL)
    {
        printf("Cannot create destination file.\n");
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