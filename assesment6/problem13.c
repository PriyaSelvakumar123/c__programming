// Write a program to reverse the number.
#include<stdio.h>
int main()
{
    int a,l;
    printf("Enter the number:");
    scanf("%d",&a);
    while(a!=0)
    {
        l=a%10;
        a=a/10;
        printf("%d",l);
    }
}