#include <stdio.h>

void reversearray(int array[], int start, int last)
{
    for(int i=start, j=last; i<=j; i++,j--)
    {
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
}

void leftrotatektimes(int array[], int n, int k)
{
    k=k%n;
    reversearray(array, 0, k-1);
    reversearray(array, k, n-1);
    reversearray(array, 0, n- 1);
    
}


int main() {
    int array [] = {1,2,3,4,5};
     int n=5, k=3;
    printf("Original Array : ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", array[i]);
    }
    
   
    leftrotatektimes(array, n, k);
    printf("\nLeft Rotated Array 2 Times : ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}
