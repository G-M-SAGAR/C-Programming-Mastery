#include <stdio.h>

int main()
{
    printf("Searching Algorithm Comparison\n\n");

    printf("%-25s %-15s\n", "Algorithm", "Time Complexity");
    printf("------------------------------------------------\n");
    printf("%-25s O(n)\n", "Linear Search");
    printf("%-25s O(log n)\n", "Binary Search");
    printf("%-25s O(sqrt(n))\n", "Jump Search");
    printf("%-25s O(log log n)\n", "Interpolation Search");
    printf("%-25s O(log n)\n", "Exponential Search");
    printf("%-25s O(log n)\n", "Fibonacci Search");
    printf("%-25s O(log3 n)\n", "Ternary Search");

    return 0;
}