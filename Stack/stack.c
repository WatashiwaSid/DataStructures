/*
Stack Implementation with Arrays.
Create the following functions:
1. push()
2. pop()
3. peek()
4. display()

*/

#include<stdio.h>
#define size 5
int top=-1;
int stack[size];

void push(void);
void pop(void);
void peek(void);
void display(void);

void main()
{
    int option;
    
    do
    {
        printf("\n\n*****MAIN MENU*****\n\n");
        printf("\n1. PUSH");
        printf("\n2. POP");
        printf("\n3. PEEK");
        printf("\n4. DISPLAY");
        printf("\n5. EXIT");

        printf("\n\nEnter the index of operation that you want to perform: ");
        scanf("%d", &option);

        switch(option)
        {
            case 1: 
                    push(); break;
            case 2:
                    pop(); break;
            case 3:
                    peek(); break;
            case 4:
                    display(); break;

        }

    }while(option!=5);
}

void push()
{
    int insert;

    printf("Enter the value to push in the stack: ");
    scanf("%d", &insert);

    if(top==size-1)
    {
        printf("\nStack Overflow");
    }
    else
    {
        top++;
        stack[top]=insert;
    }
}

void pop()
{
    int delete;
    if(top==-1)
    {
        printf("\nStack Underflow");
    }
    else
    {
        delete=stack[top];
        top--;
        printf("\n%d is popped from the stack", delete);
    }
}

void peek()
{
    if(top==-1)
    {
        printf("\nStack is empty");
    }
    else
    {
        printf("%d is at the top of the stack", stack[top]);
    }
}

void display()
{
    for(int count=size-1; count>=0; count--)
    {
        printf("%d\n", stack[count]);
    }
}