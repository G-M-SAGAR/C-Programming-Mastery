#include <stdio.h>

int main()
{
    int process[] = {1,2,3,4};

    printf("CPU Scheduling (FCFS)\n\n");

    for(int i = 0; i < 4; i++)
    {
        printf("Executing Process P%d\n", process[i]);
    }

    printf("\nAll Processes Executed.\n");

    return 0;
}