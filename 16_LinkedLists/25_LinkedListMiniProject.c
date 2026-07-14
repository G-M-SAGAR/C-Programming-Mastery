#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head=NULL;

void insert(int value)
{
    struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));

    newNode->data=value;
    newNode->next=head;
    head=newNode;
}

void display()
{
    struct Node *temp=head;

    while(temp)
    {
        printf("%d -> ",temp->data);
        temp=temp->next;
    }

    printf("NULL\n");
}

int main()
{
    int choice,value;

    do
    {
        printf("\n===== Linked List Menu =====\n");
        printf("1.Insert\n");
        printf("2.Display\n");
        printf("3.Exit\n");

        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter Value: ");
                scanf("%d",&value);
                insert(value);
                break;

            case 2:
                display();
                break;

            case 3:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    }while(choice!=3);

    return 0;
}