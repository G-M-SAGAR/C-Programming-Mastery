#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head = NULL, *temp = NULL, *newNode;
    int n, pos;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        newNode = (struct Node *)malloc(sizeof(struct Node));

        printf("Enter data: ");
        scanf("%d", &newNode->data);

        newNode->next = NULL;

        if(head == NULL)
        {
            head = temp = newNode;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
    }

    printf("Enter position: ");
    scanf("%d", &pos);

    newNode = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter new value: ");
    scanf("%d", &newNode->data);

    if(pos == 1)
    {
        newNode->next = head;
        head = newNode;
    }
    else
    {
        temp = head;

        for(int i = 1; i < pos - 1 && temp != NULL; i++)
            temp = temp->next;

        if(temp == NULL)
        {
            printf("Invalid Position\n");
            free(newNode);
            return 0;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    printf("\nUpdated List:\n");

    temp = head;

    while(temp)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");

    return 0;
}