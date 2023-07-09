// Mutiply a given matrix with a scalar value k.

#include<stdio.h>
void main()
{
    int matrix[2][2];
    printf("Enter the elements of matrix (SIZE 2x2) : ");

    //read matrix
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    //ask scalar value
    int scalar;
    printf("\nEnter scalar value to multiply with: ");
    scanf("%d", &scalar);

    //multiply with scalar value
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            matrix[i][j] = matrix[i][j]*scalar;
        }
    }

    //display matrix
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
}