// Write a program to print all odd numbers from 1 to 10.
#include<stdio.h>
int main()
{
    int i=10,a,b;
    while(i<100)
    {
    if(i%2==0)
        {
            a=i%10;
            b=i/10;
            if(a+b==6)
            {
                printf("%d\n",i);
            }
        }      
    i++;
    }

}
