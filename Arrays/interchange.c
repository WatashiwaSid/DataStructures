/*
Objective: To interchange largest and smallest element in an array.
*/

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

void main()
{
    printf("Enter the size of array: ");
    int size;
    scanf("%d", &size);
    int *array = (int*) malloc(size*sizeof(int));

    printf("\nEnter the array elements (SIZE %d) : ", size);
    for(int i=0; i<size; i++)
    {
        scanf("%d", &array[i]);
    }
    
    int max, min;
    max = INT_MIN;
    min = array[0];
    int maxcount=0, mincount=0;

    for(int i=0; i<size; i++)
    {
        if(array[i]>max)
        {
            max = array[i];
            maxcount = i;
        }
        if(array[i]<min)
        {
            min = array[i];
            mincount = i;
        }
            
    }

    printf("\nArray: ");
    for(int i=0; i<size; i++)
        printf("%d ", array[i]);
    printf("\nMax Element : %d", max);
    printf("\nMin Element : %d", min);

    int temp = array[maxcount];
    array[maxcount] = array[mincount];
    array[mincount] = temp;

    printf("\nInterchanged Array: ");
    for(int i=0; i<size; i++)
        printf("%d ", array[i]);


}