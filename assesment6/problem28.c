//C program to find LCM of two numbers
#include<stdio.h>
int main()
{
    int a,b,x,y,temp,lcm;
    printf("Enter the number:");
    scanf("%d %d",&a,&b);
    x=a,y=b;
    while(y!=0)
    {
        temp=x%y;
        x=y;
        y=temp;
    }
    lcm=a*b/x;
    printf("%d",lcm);
}