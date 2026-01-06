// Write a program to print all odd numbers from 1 to 9.
#include<stdio.h>
int main()
{
    for(int i=1;i<=9;i++)
    {
        if(i%2!=0)
        {
             printf("%d\n",i);
        }
    }
}