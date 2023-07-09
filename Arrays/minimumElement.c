/*
Objecttive: To find the maximum element in a given array.
*/

#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    int array[size];
    printf("\nEnter the elements of array (SIZE %d) : ", size);
    for(int count=0; count<size-1; count++)
    {
        scanf("%d", &array[count]);
    }

    int min = array[0];
    for(int count=0; count<size-1; count++)
    {
        if(array[count+1]<min)
            min=array[count+1];
        else 
            continue;
    }
    printf("\nMinimum Element: %d", min);

    return 0;
}