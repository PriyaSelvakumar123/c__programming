// Write a program to calculate the sum of first 6 natural numbers.
#include<stdio.h>
int main()
{
    int sum=0;
    for(int i=6;i>=1;i--)
    {
        sum=sum+i;
    }
     printf("%d\n",sum);
}