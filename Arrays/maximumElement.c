/*
Objective: Find the greatest element in a given array.
*/

#include<stdio.h>
void main()
{
    //read array elements
    int array[5];
    printf("Enter the elements of array (size 5) : ");

    for(int count=0; count<5; count++)
    {
        scanf("%d", &array[count]);
    }

    //find maximum element
    int max = array[0];
    for(int count=0; count<5; count++)
    {
        if(array[count+1]>max)
            max=array[count+1];
        else
            continue;
    }

    printf("\nMaximum Element: %d", max);


}