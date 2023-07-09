/*
Add the adjacent elements of two matrices having same order.
*/

#include<stdio.h>
void main()
{
    int matrix1[3][3], matrix2[3][3], sum[3][3];
    printf("Enter the elements of matrix 1 (SIZE 3x3) : ");

    //read matrix 1
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }


    printf("\nEnter the elements of matrix 2 (SIZE 3x3) : ");
    //read matrix 2
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    //Add adjacent elements of both matrix
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            sum[i][j] = matrix1[i][j]+matrix2[i][j];
        }
    }

    printf("\nSum Matrix: \n");
    //display sum
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }


}