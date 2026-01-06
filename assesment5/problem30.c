//C program to find GCD of two numbers
#include<stdio.h>
int main()
{
    int a,b,x,y,temp,lcm;
    printf("Enter the number:");
    scanf("%d %d",&a,&b);
    x=a,y=b;
    for(;y!=0;)
    {
        temp=x%y;
        x=y;
        y=temp;
    }
    printf("%d",x);
}