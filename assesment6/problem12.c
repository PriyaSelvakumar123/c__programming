// Write a program to calculate the sum of digits of a number.
#include<stdio.h>
int main()
{
    int a,sum=0,l;
    printf("Enter the number:");
    scanf("%d",&a);
    while(a!=0)
    {
        l=a%10;
        a=a/10;
        sum=sum+l;
    }
    printf("%d",sum);
}