//C program to find LCM of three numbers
#include<stdio.h>
int main()
{
    int a,b,x,y,temp,lcm,lcm1,c;
    printf("Enter the number:");
    scanf("%d %d %d",&a,&b,&c);
    x=a,y=b;
    while(y!=0)
    {
        temp=x%y;
        x=y;
        y=temp;
    }
    lcm=a*b/x;
    x=lcm,y=c;
    while(y!=0)
    {
        temp=x%y;
        x=y;
        y=temp;
    }
    lcm1=lcm*c/x;
    printf("%d",lcm1);
}