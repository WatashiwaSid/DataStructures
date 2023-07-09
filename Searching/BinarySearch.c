/*
Binary Search Algorithm
Condition : Monotonic Function (Data set must be sorted, either in ascending or in descending order)

Worst Case Time Complexity : 0(log n)
Best Case Time Complexity : 0(1) "Element found at mid"
Space Complexity : 0(1) "No extra auxiliary space required"
*/

#include<stdio.h>
#include<stdlib.h>

int BinarySearch(int array[], int size, int key)
{
    int start=0;
    int end=size-1;
    int mid = (start+end)/2; //condition prone to interger overflow

    while(start<=end)
    {
        if(mid==key)
            return mid;

        if(key>mid)
            start=mid+1;
        
        else
            end=mid-1;

        mid=(start+end)/2;
    }
    return -1;
}


void main()
{
    int size;
    printf("Enter the size of array : ");
    scanf("%d", &size);

    int *ptr = (int*) malloc(size*sizeof(int));

    printf("Enter array elements in sorted manner [SIZE %d] : ", size);
    for(int i=0; i<size; i++)
    {
        scanf("%d", &ptr[i]);
    }

    int key;
    printf("Enter the element that you want to search : ");
    scanf("%d", &key);

    printf("Element %d found at index %d", key, (BinarySearch(ptr, size, key)-1));

    
}