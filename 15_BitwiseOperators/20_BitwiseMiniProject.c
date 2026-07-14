#include <stdio.h>

int main()
{
    int choice;
    unsigned int num, k;

    do
    {
        printf("\n===== Bitwise Menu =====\n");
        printf("1. Set Bit\n");
        printf("2. Clear Bit\n");
        printf("3. Toggle Bit\n");
        printf("4. Check Bit\n");
        printf("5. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Number and Bit Position: ");
                scanf("%u%d",&num,&k);
                printf("Result = %u\n", num | (1 << k));
                break;

            case 2:
                printf("Enter Number and Bit Position: ");
                scanf("%u%d",&num,&k);
                printf("Result = %u\n", num & ~(1 << k));
                break;

            case 3:
                printf("Enter Number and Bit Position: ");
                scanf("%u%d",&num,&k);
                printf("Result = %u\n", num ^ (1 << k));
                break;

            case 4:
                printf("Enter Number and Bit Position: ");
                scanf("%u%d",&num,&k);

                if(num & (1 << k))
                    printf("Bit is SET\n");
                else
                    printf("Bit is CLEAR\n");

                break;

            case 5:
                printf("Goodbye!\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    }while(choice!=5);

    return 0;
}