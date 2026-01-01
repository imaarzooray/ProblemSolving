#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

int main(int argc, char *argv[])
{

    struct node *newNode, *head, *temp;

    head = 0;
    
    int choice;
    while (choice)
    {

        printf("What's your choice: ");
        scanf("%d", &choice);

        newNode = (struct node *)malloc(sizeof(struct node));

        printf("Enter the data in node: ");
        scanf("%d", &newNode->data);

        newNode->next = 0;

        if (head == 0)
        {
            head = newNode;
            temp = newNode;
        }
        else
        {

            temp->next = newNode;
            temp = newNode;
        }
    }

    temp = head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp =  temp->next;
    }
    return 0;
}