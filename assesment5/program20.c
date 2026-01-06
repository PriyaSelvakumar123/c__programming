//C program to count the number of prime numbers between 1 to 10
#include<stdio.h>
int main()
{
    int b,c=0;
    for(int i=0;i<10;i++)
    {
    for(int j=2;j<i;j++)
    {
        if(i%j==0)
        {
            b=1;
            break;
        }
    }
    if(b!=1)
    {
        c=c+1;
    }
 }
    printf("%d",c);
}