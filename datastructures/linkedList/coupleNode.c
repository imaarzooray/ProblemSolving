#include<stdio.h>
#include<stdlib.h>


struct node{
    int data;
    struct node *next;
};

int main(int argv, char *argc[])
{


    struct node *newNode, *node2, *head = NULL;

    newNode = (struct node*)malloc(sizeof(struct node));

    newNode->data = 34;
    head = newNode;
    newNode->next = NULL;

    printf("Data in Node1: %d",newNode->data);
    
    node2 = (struct node*)malloc(sizeof(struct node));
    node2->data=45;
    newNode->next=node2;
    node2->next = NULL;
    printf("\nData in Node2: %d",node2->data);
    

    return 0;
}