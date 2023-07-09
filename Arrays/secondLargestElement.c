/*
Objective: To find the second largest element in a given array.
*/

#include<stdio.h>
#include<limits.h>

void main()
{
    int array[10];
    printf("Enter the elements of array [SIZE 10] : ");

    for(int i=0; i<10; i++)
    {
        scanf("%d", &array[i]);
    }

    //find the largest element first
    int max = array[0];

    for(int i=0; i<10; i++)
    {
        if(max<array[i])
            max = array[i];
        else
            continue;
    }

    // find the second largest element now
    int smax = INT_MIN;
    
     for(int i=0; i<10; i++)
    {
        if(array[i]!=max && smax<array[i])
            smax = array[i];
        else
            continue;
    }

    printf("\nSecond largest element: %d", smax);
    
}