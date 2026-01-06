// Write a program to find the sum of first 6 natural numbers.
#include<stdio.h>
int main()
{
    int i=6,sum=0;
    while(i>=1)
    {
        sum+=i;
        i--;
    }
    printf("%d\n",sum);
}