#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

int main(int argv, char *argc[])
{

    struct node *head, *newNode;
    head =NULL;


    newNode = (struct node*)malloc(sizeof(struct node));

    newNode->data =45;
    newNode->next=NULL;

    head = newNode;

    printf("The data in node: %d",newNode->data);


    return 0;
}