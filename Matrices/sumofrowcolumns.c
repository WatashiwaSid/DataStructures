/*
Find the sum of individual rows and columns of a matrix.

    0   1   2
0   1   2   1   = 4
1   2   3   5   = 10
2   0   5  -1   = 4
   =3  =10  =5 

NOTE: Remember to initialize the sum variable inside loop.
*/

#include<stdio.h>
void main()
{
    int matrix[3][3];
    printf("Enter the elements of matrix (SIZE 3x3) : ");

    //read matrix
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    //calculate sum for each row and column
    for(int i=0; i<3; i++)
    {
        int sumrow=0, columnsum=0;
        for(int j=0; j<3; j++)
        {
            sumrow = sumrow + matrix[i][j];
            columnsum = columnsum + matrix[j][i];
        }
        printf("Sum of row %d: %d\n", i+1, sumrow);
        printf("Sum of Column %d: %d\n", i+1, columnsum);
    }


}

