#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head = NULL, *temp;

    int values[] = {10, 20, 30, 40, 50};

    for(int i = 0; i < 5; i++)
    {
        struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = values[i];
        newNode->next = NULL;

        if(head == NULL)
            head = newNode;
        else
            temp->next = newNode;

        temp = newNode;
    }

    int key = 30;
    int position = 1;
    temp = head;

    while(temp != NULL)
    {
        if(temp->data == key)
        {
            printf("%d Found at Position %d\n", key, position);
            return 0;
        }

        temp = temp->next;
        position++;
    }

    printf("Element Not Found\n");

    return 0;
}