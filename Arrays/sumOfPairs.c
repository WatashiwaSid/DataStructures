/*
Probelem Statement: Find the total numner of pairs in the array whose sum is eqaul to the given value X.
Constraints: Both values in the pair should be distinct. Do not count the reverse of the pair.
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

    int pair, paircount=0;
    printf("Enter the add up pair: ");
    scanf("%d", &pair);

    for(int outercount=0; outercount<8; outercount++)
    {
        for(int innercount=outercount+1; innercount<8; innercount++)   
        {
            if(array[outercount]+array[innercount]==pair)
            {
                paircount++;
                printf("Pair %d : (%d,%d)\n", paircount, array[outercount], array[innercount]);
                
            }
                
            else
                continue;

        }
    }

    printf("\nTotal pairs that add up to %d: %d", pair, paircount);


}