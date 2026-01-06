// Write a program to calculate the sum of all two digit odd numbers ten's digit is 7.
#include<stdio.h>
int main()
{
    int l,m=0;
    for(int i=70;i<=100;i++)
    {
        if(i%2!=0)
        {
           l=i/10;
           if(l==7)
           {
            m=m+i;
           }
        }
    }
    printf("%d\n",m);
}