#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

void traverseList(node* head)
{
    while(head!=NULL)
    {
        printf("%d ", head->data);
        head=head->next;
    }
    printf("\n");
}

node* insertAtHead(node* head, int data)
{
   node *newhead = (node*) malloc(sizeof(node));
   newhead->data = data;
   newhead->next = head;
   return newhead;  

}

node* insertAtIndex(node* head, int data, int index)
{
    node *traverse = head;
    node* newnode = (node*) malloc(sizeof(node));
                    
    int i=0;
    while(i!=index-1)
    {
        traverse = traverse->next;
        i++;
    }

    newnode->data = data;
    newnode->next = traverse->next;
    traverse->next = newnode;

    return head;
    
}

node* insertAtLast(node* head, int data)
{
    node* traverse = head;
    node* newnode = (node*) malloc(sizeof(node));

    int i=0;
    while(traverse->next!=NULL)
    {
        traverse = traverse->next;
    }

    newnode->data = data;
    traverse->next = newnode;
    newnode->next =NULL;
    return head;

}



void main()
{
    node* head = (node*) malloc(sizeof(node));

    head->data = 10;
    head->next = NULL;
    traverseList(head);
   
    
    head = insertAtHead(head, 5);
    traverseList(head);

    head = insertAtHead(head, 0);
    traverseList(head);

    head = insertAtIndex(head, 2, 1);
    traverseList(head);

    head = insertAtLast(head, 12);
    traverseList(head);


}


