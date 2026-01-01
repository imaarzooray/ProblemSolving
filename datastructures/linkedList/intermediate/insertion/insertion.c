#include <stdio.h>
#include <stdlib.h>

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
    while(choice)
    {
        printf("Choice - Continue(1) or Exit(0): ");
        scanf("%d",&choice);
        
        newNode = (struct node *)malloc(sizeof(struct node));
        printf("\nData:");
        scanf("%d",newNode->data);

        newNode->next = 0;

        if(head==NULL)
        {

            head = newNode;
            temp = newNode;
        }
        else{

            temp->next = newNode;
            temp = newNode;
        }
    
    }

    

    return 0;
}