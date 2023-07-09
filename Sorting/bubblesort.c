/*
Algorithm - Buuble Sort (Sinking Sort)
Technique - Swap adjacent elements in ascending order. Keep swapping until array gets sorted.
Worst Case Time Complexity - O(n^2)
Stable - True
Auxiliary Space - O(1)

*/

#include<stdio.h>
#define n 6

void main()
{
    int array [n] = {6,35,4,10,2,3};

    //display the unsorted array
    printf("Unsorted Array : ");
    for(int i=0; i<n; i++)
        printf("%d ", array[i]);

    //implement bubble sort
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1-i; j++)
        {
            if(array[j]>array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

     //display the sorted array
    printf("\n__Sorted Array : ");
    for(int i=0; i<n; i++)
        printf("%d ", array[i]);

}