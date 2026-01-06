// Write a program to count the number of digits in a given number.
#include<stdio.h>
int main()
{
    int a,sum=0;
    printf("Enter the number:");
    scanf("%d",&a);
    while(a!=0)
    {
        a=a/10;
        sum++;
    }
    printf("%d",sum);
}