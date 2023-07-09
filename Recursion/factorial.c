/*
Find factorial n using recursion.
*/

#include<stdio.h>

int factorial(int n)
{
    if(n==0)
        return 1;
    
    while(n>0)
    {
        return (n * factorial(n-1));
    }
    
}

void main()
{
    int num;
    printf("Enter number to get factorial : ");
    scanf("%d", &num);
    printf("Factorial of %d : %d", num, factorial(num));

}