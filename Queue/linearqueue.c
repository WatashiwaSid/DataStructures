/*
Queue implementation using array.
*/

#include<stdio.h>
#define size 5
int queue[size];
int front=-1, rear=-1;

void enqueue();
void dequeue();
void peek();
void display();

void main()
{
    int option;

    do
    {
        printf("\n\n****MAIN MENU****\n\n");
        printf("1. ENQUEUE\n");
        printf("2. DEQUEUE\n");
        printf("3. PEEK\n");
        printf("4. DISPLAY\n");
        printf("5. EXIT\n");

        printf("\n\nSelect the index of operation: ");
        scanf("%d", &option);

        switch(option)
        {
            case 1:
                    enqueue(); break;
            case 2:
                    dequeue(); break;
            case 3:
                    peek(); break;
            case 4:
                    display(); break;
        }


    }while(option!=5);
}

void enqueue()
{
    int num;
    printf("\n\nEnter the number that you want to insert : ");
    scanf("%d", &num);

    if(front==-1 && rear==-1)
    {
        front = 0;
        rear = 0;
        queue[rear] = num;
    }

    else if(rear==size-1)
    {
        printf("\nQueue Overflow");
    }

    else
    {
        rear++;
        queue[rear]=num;
    }
}

void dequeue()
{
    int del;
    if(front==-1 && rear==-1)
    {
        printf("\nQueue Underflow");
    }

    else if(front==rear)
    {
        del = queue[front];
        front = -1;
        rear = -1;
        printf("\n%d is dequeued from the queue", del);
    }

    else
    {
        del = queue[front];
        front++;
        printf("\n%d is dequeued from the queue", del);
    }

}

void display()
{
    for(int i=front; i<rear+1; i++)
    {
        printf("%d\n", queue[i]);
    }
}

void peek()
{
    if(front==-1 && rear==-1)
        printf("\nQueue is empty");
    else
        printf("%d is at the front of the queue", queue[front]);
}