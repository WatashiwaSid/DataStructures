// Singly list list implementation

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

void traverseList(node* pointer)
{
    while(pointer!=NULL)
    {
    printf("%d ", pointer->data);
    pointer = pointer->next;
    }
}



void main()
{
    node* head = (node*) malloc(sizeof(node));
    node* second = (node*) malloc(sizeof(node));
    node* third = (node*) malloc(sizeof(node));
    node* fourth = (node*) malloc(sizeof(node));

    //link first and second node
    head->data = 10;
    head->next = second;

    //link second and third node
    second->data = 20;
    second->next = third;

    //link third and fourth node
    third->data = 30;
    third->next = fourth;

    //make fourth node last node
    fourth->data = 40;
    fourth->next = NULL;

    traverseList(head);


}