// Write a program to print all odd numbers from 11 to 20.
#include<stdio.h>
int main()
{
    for(int i=11;i<=20;i++)
    {
        if(i%2!=0)
        {
             printf("%d\n",i);
        }
    }
}