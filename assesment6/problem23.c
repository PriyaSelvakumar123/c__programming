//C program to count the number of perfect square digits in a given number
#include<stdio.h>
int main()
{
    int a,c=0,d=0;
    printf("Enter the number:");
    scanf("%d",&a);
    while(a>0)
    {
        c=a%10;
        if(c==1||c==4||c==9)
        {
        d++;
        }
        a=a/10;
    }
    printf("%d",d);
}