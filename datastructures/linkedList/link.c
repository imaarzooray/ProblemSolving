#include <stdio.h>
#include <stdlib.h>

//* self refrential structure
struct node
{
    int data;
    struct node *next;
};

int main(int argv, char *argc[])
{
    struct node *newNode, *head, *temp;
    head = NULL;
    int choice;
    while (choice)
    {
        printf("What's your choice: ");
        scanf("%d", &choice);
        newNode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data in the node: ");
        scanf("%d",&newNode->data);
        if(head==NULL)
        {
            head = newNode;
            temp = head;
        }
        else{
            // head->next = newNode;  
            temp->next = newNode;
            temp = newNode;
        }

    }

    return 0;
}