#include <stdio.h>

int main()
{
    float arr[] = {0.42, 0.32, 0.23, 0.52, 0.25};

    printf("Bucket Sort works efficiently for floating-point values between 0 and 1.\n");

    printf("Input Values:\n");

    for(int i = 0; i < 5; i++)
        printf("%.2f ", arr[i]);

    return 0;
}