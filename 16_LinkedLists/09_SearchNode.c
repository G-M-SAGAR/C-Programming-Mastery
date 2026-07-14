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
    int n, key, pos = 1;

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

    printf("Enter element to search: ");
    scanf("%d", &key);

    temp = head;

    while(temp)
    {
        if(temp->data == key)
        {
            printf("Element found at position %d\n", pos);
            return 0;
        }

        pos++;
        temp = temp->next;
    }

    printf("Element Not Found\n");

    return 0;
}