#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main(int argv, char *argc[])
{
    struct node *head;
    struct node *temp;
    struct node *newNode;

    head = 0;

    newNode = (struct node *)malloc(sizeof(struct node));

    printf("Enter the data: ");
    scanf("%d",&newNode->data);

    if(head==0)
    {
        head = newNode;
        temp = head;
    }
    else{
        head->next = newNode;
        temp = newNode;
    }


    return 0;
}