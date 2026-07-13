#include <stdio.h>

enum Day
{
    MON = 1,
    TUE,
    WED,
    THU,
    FRI,
    SAT,
    SUN
};

int main()
{
    enum Day today;

    today = WED;

    printf("Value of WED = %d\n", today);

    if(today == WED)
    {
        printf("Today is Wednesday.\n");
    }

    return 0;
}