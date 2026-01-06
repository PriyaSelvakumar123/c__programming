// Write a program to find the sum of all two digit numbers which have 7 in unit place.
#include<stdio.h>
int main()
{
    int i=10,l,sum=0;
    while(i<100)
    {
        if(i%2!=0)
        {
           l=i/10;
           if(l==7)
           {
            sum=sum+i;
           }
        }
    i++;
    }
 printf("%d\n",sum);
}
