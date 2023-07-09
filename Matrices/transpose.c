// tranpose of a matrix

#include<stdio.h>
void main()
{
    int matrix[2][3];
    printf("Enter the elements of matrix (SIZE 2x3) : ");

    //read matrix
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    //display matrix
    printf("\nMatrix Representation: \n");

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    //display transpose
    printf("\nTranspose of Matrix: \n");

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("%d ", matrix[j][i]);
        }
        printf("\n");
    }

}