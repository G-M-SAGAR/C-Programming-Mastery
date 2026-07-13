#include <stdio.h>

int main()
{
    FILE *source, *destination;
    char ch;

    source = fopen("students.dat", "rb");
    destination = fopen("backup.dat", "wb");

    if(source == NULL || destination == NULL)
    {
        printf("Error opening binary files.\n");
        return 1;
    }

    while(fread(&ch, sizeof(char), 1, source) == 1)
    {
        fwrite(&ch, sizeof(char), 1, destination);
    }

    fclose(source);
    fclose(destination);

    printf("Binary file copied successfully.\n");

    return 0;
}