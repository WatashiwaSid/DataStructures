/*
Optimized implementation of bubble sort using flag variable.
Worst Case Time Complexity - O(n^2)
*/

#include<stdio.h>
#include<stdbool.h>
#define n 5

void main()
{
    int array[n] = {5,3,1,2,4};

    //print the unsorted array
    printf("Unsorted Array : ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", array[i]);
    }

    //implement optimized bubble sort

    for(int i=0; i<n-1; i++)
    {
        bool flag = true;
        for(int j=0; j<n-1-i; j++)
        {
            if(array[j]>array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
                flag = false;
            }
        }

        if (flag==true) break;
    }

    //print the sorted array
    printf("\n  Sorted Array : ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", array[i]);
    }
}