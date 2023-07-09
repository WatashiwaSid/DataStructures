/*
Multiply two given matrices, if multiplication is possible.

Multiplication Rule: 
1. Multilication of two matrices is possible only when the columns in first are eqaul to the rows of second matrix. 
a[i][j] b[j][k]

2. The order of the resultant matrix is eqaul to the rows in first matrix by columns in second matrix.
ab[i][k]

*/

#include<stdio.h>
void main()
{
    int matrixOne[3][3], matrixTwo[3][3], multipliedMatrix[3][3] = {0};

    //read elements of first matrix
    printf("Enter the elements of matrix 1 (SIZE 3x3) : ");

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            scanf("%d", &matrixOne[i][j]);
        }
    }

    //read the elements of second matrix
    printf("\nEnter the elements of matrix 2 (SIZE 3x3) : ");
    
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            scanf("%d", &matrixTwo[i][j]);
        }
    }

    //perform matrix multiplication

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            int sum=0;
            for(int k=0; k<3; k++)
            {
                sum = sum + (matrixOne[i][k]*matrixTwo[k][j]);
            }
            multipliedMatrix[i][j] = sum;
        }
    }

    //display matrix 1
    printf("\nMatrix 1: \n");
    
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d ", matrixOne[i][j]);
        }
        printf("\n");
    }

    //display matrix 2
    printf("\nMultiplied Matrix: \n");
    
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d ", matrixTwo[i][j]);
        }
        printf("\n");
    }

    //display multiplied matrix
    printf("\nMultiplied Matrix: \n");
    
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d ", multipliedMatrix[i][j]);
        }
        printf("\n");
    }

}