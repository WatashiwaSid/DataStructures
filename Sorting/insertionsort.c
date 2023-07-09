/*
Algorithm - Insertion Sort
Technique - Swap The array is virtually split into a sorted and an unsorted part. Values from the unsorted part are picked and placed at the correct position in the sorted part.

Worst Case Time Complexity - O(n^2)
Stable - True
Auxiliary Space - O(1)
*/

#include<stdio.h>
#define n 5
void main()
{
    int array[n] = {5,2,4,0,1};
    //print the unsorted array
    printf("Unsorted Array : ");
    for(int i=0; i<n; i++)
        printf("%d ", array[i]);

    for(int i=1; i<n; i++)
    {
        int j=i;
        while(j>0 && array[j]<array[j-1])
        {
            int temp = array[j];
            array[j] = array[j-1];
            array[j-1] = temp;
            --j;
        }
    }
    //print the sorted array
    printf("\nSorted Array : ");
    for(int i=0; i<n; i++)
        printf("%d ", array[i]);


}