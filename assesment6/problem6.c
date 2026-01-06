// Write a program to print all odd numbers from 11 to 20.
#include<stdio.h>
int main()
{
    int i=0;
    while(i<=20)
    {
    while(i>10&&i<=20)
    {
    
        if(i%2==1)
        {
            printf("%d\n",i);
        }      
        break; 
    }
    i++;
}
}