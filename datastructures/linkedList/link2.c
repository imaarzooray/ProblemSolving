#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main(int argv, char *argc[])
{

    struct node *newNode;
    struct node *head;
    struct node *temp;


    head = 0;
    int choice;

    while (choice)
    {
        printf("What's your Choice: ");
        scanf("%d", &choice);

        newNode = (struct node *)malloc(sizeof(struct node));
        
        printf("Data: ");
        scanf("%d",&newNode->data);

        newNode->next = 0;

        if(head==0)
        {
            head = newNode;
            temp = head;
        }
        {
            temp->next = newNode;
            temp = newNode;
        }

    }

    temp = head;
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp = temp->next;
    }

    

    return 0;
}