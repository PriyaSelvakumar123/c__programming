// Write a program to find the sum of first 5 natural numbers.
#include<stdio.h>
int main()
{
    int i=1,sum=0;
    while(i<=5)
    {
        sum+=i;
        i++;
    }
    printf("%d\n",sum);
}