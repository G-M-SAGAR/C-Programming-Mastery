#include <stdio.h>

int main()
{
    printf("Sorting Algorithm Comparison\n\n");

    printf("%-20s %-15s\n", "Algorithm", "Worst Case");
    printf("-------------------------------------\n");
    printf("%-20s O(n^2)\n", "Bubble Sort");
    printf("%-20s O(n^2)\n", "Selection Sort");
    printf("%-20s O(n^2)\n", "Insertion Sort");
    printf("%-20s O(n log n)\n", "Merge Sort");
    printf("%-20s O(n^2)\n", "Quick Sort");
    printf("%-20s O(n log n)\n", "Heap Sort");
    printf("%-20s Depends on Gap\n", "Shell Sort");

    return 0;
}