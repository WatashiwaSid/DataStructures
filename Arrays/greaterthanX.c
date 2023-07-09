/*
Problem Statement: Count the number of elements in given array greater than a given number x.
*/

#include<stdio.h>
void main()
{
    int array[10];
    int num, maxcount=0;

    printf("Enter the elements of array (SIZE 10) : ");

    for(int i=0; i<10; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("\nEnter the max limit: ");
    scanf("%d", &num);

    for(int i=0; i<10; i++)
    {
        if(array[i]>num)
            maxcount++;
        else
            continue;
    }

    printf("Total numbers greater than %d: %d", num, maxcount);


}