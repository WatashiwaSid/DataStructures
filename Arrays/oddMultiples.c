/*
Problem Statement: Given an array of integers, change the value of all odd indexed elements to its second multiple and increment all even indexed value by 10.

array{1,2,3,4,5,6,7,8} = array{11,4,13,8,15,12,17,16}
*/

#include<stdio.h>
void main()
{
    int array[8];
    printf("Enter the elements of array : ");
    for(int i=0; i<8; i++)
    {
        scanf("%d", &array[i]);
    }

    for(int i=0; i<8; i++)
    {
        if(i%2==0)
        {
            array[i] = array[i]+10;
        }
        else
        {
            array[i] = array[i]*2;
        }
    }

    printf("\nArray Elements: ");
    for(int i=0; i<8; i++)
    {
        printf("%d ", array[i]);
    }
}