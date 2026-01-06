//Write a C program to accept a number from user and remove the last digit if it is odd.
#include<stdio.h>
int main()
{
    int a,b,c,l=1;
    printf("Enter the number:");
    scanf("%d",&a);
    b=a%10;
    c=a;
    for(;a!=0;)
    {
        a=a/10;
        l=l*10;
    }
    l=l/10;
    if(b%2!=0)
    {
        c=c-l;
    }
    printf("%d",c);
}