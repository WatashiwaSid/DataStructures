/*
Linear Search Algorithm.
Worst Case Time Complexity : 0(n) "Element are searched at linear time"
Best Case Time Complexity : 0(1) "Element being found at the first index of the data set"
Space Complexity : 0(1) "No extra space required"
*/

#include<stdio.h>
#include<stdlib.h>

void LinearSearch(int array[], int size, int key)
{
    int flag=0;
    int index=0;

    for(int i=0; i<size; i++)
    {
        if(array[i]==key)
        {
            index=i;
            flag=1;
            break;
        }
        else    
            continue;
    }

    if(flag!=0)
        printf("Element %d found at index %d", key, index);

    else
        printf("Could not find the specified element");

}

void main()
{
    int size;
    printf("Enter the size of array : ");
    scanf("%d", &size);

    int *ptr = (int*) malloc(size*sizeof(int));

    printf("Enter array elements [SIZE %d] : ", size);
    for(int i=0; i<size; i++)
    {
        scanf("%d", &ptr[i]);
    }

    LinearSearch(ptr, size, 3);
}
