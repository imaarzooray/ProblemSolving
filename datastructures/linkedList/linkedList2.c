#include<stdio.h>
#include<stdlib.h>
/*
? stdlib -> standard library of header file
? To do dynamic memory allocation and use functions like 
* 1. Malloc() 
* 2. Calloc()
* 3. realloc()
* 4. free()

! ***************************************************************

* STRUCTURE -> NODE
? Defining own data type which is struct node
? We need to create our own data type because linked list contains two parts:
* 1. data - the actual data present in the linked list
* 2. address - pointer which will store the address of next node hence POINTER
*/ 

struct node{
    int data;
    struct node *next;
};


int main(int argv, char *argc[])
{
    //? allocating memory in the node and creating node
    //* struct node -> itself act as a data type i.e. user defined data type


    struct node *newNode, *head, *temp;

    /*
    ? newNode is a pointer which will hold/ store the address of variable type struct node
    ? head is a pointer whill hold the address of the first node through which we can traverse whole linked list (TRAVERSAL is only possible, if there is HEAD pointer)
    ? temp is used after creating atleast two node
    */


    //* initially the address is null or zero
    head =0;

    //* asking user to take input in the linked list
    printf("Enter the data in the node: ");
    scanf("%d",&newNode->data);

    if(head==0)
    {
        head = newNode;
        temp = head;
    }
    else{

        head->next = newNode;
        temp =newNode;
    }

    return 0;
}
