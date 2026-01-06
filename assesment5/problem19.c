//C program to check whether the second last digit of a number is prime or not
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the number:");
    scanf("%d",&a);
    c=a%1000;
    c=a/10;
    for(int i=2;i<=c/2;i++)
    {
        if(c%i==0)
        {
            b=1;
            break;
        }
    }
    if(b==1)
        printf("Not prime");
    else
        printf("Prime");
}