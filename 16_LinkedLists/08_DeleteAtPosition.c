#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head = NULL, *temp = NULL, *prev = NULL, *newNode;
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
            head = temp = newNode;
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
    }

    printf("Enter position to delete: ");
    scanf("%d", &pos);

    if(pos == 1)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
    else
    {
        temp = head;

        for(int i = 1; i < pos; i++)
        {
            prev = temp;
            temp = temp->next;

            if(temp == NULL)
            {
                printf("Invalid Position\n");
                return 0;
            }
        }

        prev->next = temp->next;
        free(temp);
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