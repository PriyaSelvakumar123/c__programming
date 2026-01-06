// Write a program to print all two digit odd numbers, whose sum of digits is 6.
#include<stdio.h>
int main()
{
    int l,m;
    for(int i=11;i<=100;i++)
    {
        if(i%2==0)
        {
            l=i%10;
            m=i/10;
            if(l+m==6)
            {
             printf("%d\n",i);
            }
        }
    }
}