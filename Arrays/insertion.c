#include<stdio.h>


//no bound check
void insert(int array[], int data, int index, int *size)
{
    for(int i=*size-1; i>=index; i--)
    {
        array[i+1] = array[i];
    }

    array[index] = data;
    *size = *size+1;
}

void main()
{
    int array[50] = {1,2,3,4,5};
    int size = 5;
    int *sptr = &size;
    for(int i=0; i<*sptr; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n");
    insert(array, 100, 3, sptr);
    for(int i=0; i<*sptr; i++)
    {
        printf("%d ", array[i]);
    }

    insert(array, 50, 1, sptr);
    for(int i=0; i<*sptr; i++)
    {
        printf("%d ", array[i]);
    }
}