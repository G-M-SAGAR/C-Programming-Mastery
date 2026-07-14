#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i;
    int largest;

    if(argc < 2)
    {
        printf("Provide numbers.\n");
        return 1;
    }

    largest = atoi(argv[1]);

    for(i = 2; i < argc; i++)
    {
        int num = atoi(argv[i]);

        if(num > largest)
            largest = num;
    }

    printf("Largest = %d\n", largest);

    return 0;
}