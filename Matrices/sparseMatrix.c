/*
Objective: To find whether a given matrix is a sparse matrix.

Sparse Matrix:
The number of zero elements are more than the number of non-zero elements.
*/

#include<stdio.h>
void main()
{
    int sparseMatrix[3][3];

    //read matrix elements
    printf("Enter the elements of matrix (SIZE 3x3) : ");

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            scanf("%d", &sparseMatrix[i][j]);
        }
    }

    //count zero and non-zero elements
    int zeroCount=0, nonZeroCount=0;
    
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(sparseMatrix[i][j]==0)
                zeroCount++;
            else
                nonZeroCount++;
        }
    }

    //display the matrix
    printf("Matrix Representation: \n");

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d ", sparseMatrix[i][j]);
        }
        printf("\n");
    }

    //print final information

    printf("\nTotal Zero Elements in the matrix: %d", zeroCount);
    printf("\nTotal Non-Zero Elements in the matrix: %d", nonZeroCount);

    if(zeroCount>nonZeroCount)
        printf("\nConclusion: Given Matrix is a Sparse Matrix");
    else
    printf("\nConclusion: Given Matrix is not Sparse Matrix");

    
}