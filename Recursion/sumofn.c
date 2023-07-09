/*
Find sum of n natural numbers using recursion.
*/

#include<stdio.h>
int sum(int n)
{
    while(n>0)
    {
        return (n + sum(n-1));
    }

}

void main()
{
    int num;
    printf("Enter bound : ");
    scanf("%d", &num);
    printf("Sum of first %d natural numbers : %d", num, sum(num));
}