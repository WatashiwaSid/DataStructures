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

node* deleteHead(node* head)
{
    node* traverse = head;
    head = head->next;
    free(traverse);
    return head;
}

node* deleteIndex(node* head, int index)
{
    node* traverse = head;
    int i=0;
    node* temp = (node*) malloc(sizeof(node));

    while(i!=index-1)
    {
        traverse = traverse->next;
        i++;
    }

    temp = traverse->next;
    traverse->next = temp->next;
    free(temp);

    return head;

}

node* deleteLast(node* head)
{
    node* traverse = head;
    node* temp = head->next;

    while(temp->next!=NULL)
    {
        traverse = traverse->next;
        temp = temp->next;
    }
    traverse->next = NULL;
    free(temp);

    return head;

}

void main()
{
    node* head = (node*) malloc(sizeof(node));
    node* second = (node*) malloc(sizeof(node));
    node* third = (node*) malloc(sizeof(node));
    node* fourth = (node*) malloc(sizeof(node));
    node* fifth = (node*) malloc(sizeof(node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = fourth;

    fourth->data = 40;
    fourth->next = fifth;

    fifth->data = 50;
    fifth->next = NULL;

    traverseList(head);

    // head = deleteHead(head);
    // traverseList(head);

    // head = deleteIndex(head, 3);
    // traverseList(head);

    head = deleteLast(head);
    traverseList(head);

}