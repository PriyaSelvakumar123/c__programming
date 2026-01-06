// Write a program to calculate the sum of all two digit numbers ending with 5.
#include<stdio.h>
int main()
{
    int sum=0;
    for(int i=11;i<=100;i++)
    {
        if(i%10==5)
        {
            sum+=i;
        }
    }
    printf("%d",sum);
}
