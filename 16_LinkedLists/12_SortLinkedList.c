#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head=NULL,*temp,*newNode,*ptr;
    int n,value;

    printf("Enter number of nodes: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        newNode=(struct Node*)malloc(sizeof(struct Node));

        printf("Enter data: ");
        scanf("%d",&newNode->data);

        newNode->next=NULL;

        if(head==NULL)
            head=temp=newNode;
        else
        {
            temp->next=newNode;
            temp=newNode;
        }
    }

    for(temp=head;temp!=NULL;temp=temp->next)
    {
        for(ptr=temp->next;ptr!=NULL;ptr=ptr->next)
        {
            if(temp->data>ptr->data)
            {
                value=temp->data;
                temp->data=ptr->data;
                ptr->data=value;
            }
        }
    }

    printf("\nSorted List:\n");

    temp=head;

    while(temp)
    {
        printf("%d -> ",temp->data);
        temp=temp->next;
    }

    printf("NULL\n");

    return 0;
}