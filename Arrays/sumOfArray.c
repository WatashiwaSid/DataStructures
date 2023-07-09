/*
Objective: Read the elements of an array and calculate the sum of all elements.
*/

#include<stdio.h>
void main()
{
    int array[10], sum=0;
    printf("Enter the elements of array (SIZE 10) : ");
    for(int i=0; i<10; i++)
    {
        scanf("%d", &array[i]);
        sum+=array[i];
    }
    printf("Sum of elements: %d", sum);
}