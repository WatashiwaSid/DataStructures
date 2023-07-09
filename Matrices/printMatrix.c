// read and print the elements of a 2d matrix

#include<stdio.h>
void main()
{
    int matrix[3][3];
    int sum=0;
    printf("Enter the elements of matrix (SIZE 3x3) : ");
    
    //read matrix
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            scanf("%d", &matrix[i][j]);
            sum+=matrix[i][j];
        }
    }

    printf("\nMatrix Representation: \n");

    //display matrix
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\nSum of all elements: %d", sum);
}
