/*
Problem Statement: Count the number of triplets whose sum is eqault to given value x.
Constraints: Distinct and do not reverse.
*/

#include<stdio.h>
void main()
{
    int array[8];
    printf("Enter the elements of array (SIZE 8) : ");

    for(int count=0; count<8; count++)
    {
        scanf("%d", &array[count]);
    }

    int tripletsum, tripletcount=0;
    printf("Enter the sum triplet value : ");
    scanf("%d", &tripletsum);

    for(int i=0; i<8; i++)
    {
        for(int j=i+1; j<8; j++)
        {
            for(int k=j+1; k<8; k++)
            {
                if(array[i]+array[j]+array[k]==tripletsum)
                {
                    tripletcount++;
                    printf("Pair %d: (%d,%d,%d)\n", tripletcount, array[i], array[j], array[k]);
                }
            }
        }
    }

    printf("\nTotal Triplets : %d", tripletcount);
}