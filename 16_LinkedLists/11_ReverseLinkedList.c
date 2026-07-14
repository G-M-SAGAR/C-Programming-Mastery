#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head=NULL,*temp=NULL,*newNode;
    struct Node *prev=NULL,*current,*nextNode;
    int n;

    printf("Enter number of nodes: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
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

    current=head;

    while(current!=NULL)
    {
        nextNode=current->next;
        current->next=prev;
        prev=current;
        current=nextNode;
    }

    head=prev;

    printf("\nReversed List:\n");

    temp=head;

    while(temp)
    {
        printf("%d -> ",temp->data);
        temp=temp->next;
    }

    printf("NULL\n");

    return 0;
}