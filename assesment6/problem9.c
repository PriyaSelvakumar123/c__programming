// Write a program to find the sum of all two digit numbers which have 5 in unit place. 
#include<stdio.h>
int main()
{
    int i=10,a,sum=0;
    while(i<100)
    {
            a=i%10;
            if(a==5)
            {
               sum=sum+i;
            }
              
    i++;
    }
 printf("%d\n",sum);
}
