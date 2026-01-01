#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main(int argv, char *argc[])
{

    // dynamically allocating the memory

    struct node *head, *temp, *newNode;

    // printf("\nNew Node Address: %x",&newNode);
    // printf("\nHead Address: %x",&head);
    // printf("\nTemp Address: %x",&temp);

    int choice;
    head = 0;

    while (choice)
    {
        newNode = (struct node *)malloc(sizeof(struct node));

        printf("Continue - 1 \t Exit - 0:\n");
        scanf("%d",&choice);

        printf("Data in Node: ");
        scanf("%d",&newNode->data);
        
        newNode->next = 0;

        if(head==NULL)
        {
            head = newNode;
            temp = head;
        }
        else{
            temp->next = newNode; 
            temp = newNode;
        }
    }


    temp = head;
    printf("\nNodes are as given below:\n");
    while(temp!=0)
    {

        printf(" | %d | %x | ",temp->data,&temp->next);
        temp = temp->next;
        if(temp!=0)
        {
            printf("    ----->    ");
        }
    }

    return 0;
}