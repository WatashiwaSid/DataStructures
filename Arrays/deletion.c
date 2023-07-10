#include<stdio.h>

void delete(int array[], int index, int *size)
{
    if(index<=0 || index>*size)
    {
        printf("Operation not possible\n");
    }
    else
    {
    for(int i=index; i<*size; i++)
    {
        array[i] = array[i+1];
    }

    *size = *size - 1;
    }
}

void main()
{
    int array[50] = {1,2,3,4,5};
    int size =5;
    int *sptr = &size;
    for(int i=0; i<*sptr; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n");

    delete(array, 2, sptr);
     for(int i=0; i<*sptr; i++)
    {
        printf("%d ", array[i]);
    }
}