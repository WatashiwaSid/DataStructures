/*
Problem Statement: Find the difference between the sum of elements at even indices to the sum of elements at odd indices.
*/

#include<stdio.h>
void main()
{
    int array[10];
    int evenSum=0, oddSum=0;
    printf("Enter the elements of array (SIZE 10) : ");
    
    for(int i=0; i<10; i++)
    {
        scanf("%d", &array[i]);
        if(i%2==0)
        {
            evenSum = evenSum + array[i];
        }
        if(i%2!=0)
        {
            oddSum = oddSum + array[i];
        }
    }

    printf("\nSum of elements at even idices : %d", evenSum);
    printf("\nSum of elements at odd idices : %d", oddSum);
    printf("\nDifference : %d", evenSum-oddSum);


}