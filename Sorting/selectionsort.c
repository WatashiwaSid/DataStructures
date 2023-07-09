/*
Algorithm - Selection Sort
Technique - Swap the smallest element in the unsorted array to the first index. Swap the next smallest element to the first index of unsorted array. Iterate until swapping is done.

Worst Case Time Complexity - O(n^2)
Stable - False. (Default implementation)
Auxiliary Space - O(1)

*/

#include<stdio.h>
#define n 9


void main()
{
    int array[n] = {5,3,2,4,9,1,6,7,8};

    //print the unsorted array
    printf("Unsorted Array : ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", array[i]);
    }

    //implement selection sort
    for(int i=0; i<n-1; i++)
    {
        int mindex = i;
        for(int j=i+1; j<n; j++)
        {
            if(array[mindex]>array[j])
            {
                mindex = j;
            }
        }

        int temp = array[mindex];
        array[mindex] = array[i];
        array[i] = temp;
    }

   

     //print sorted array
    printf("\n  Sorted Array : ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", array[i]);
    }
}