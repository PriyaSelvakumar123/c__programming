//C program to check whether a number is prime or not
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the number:");
    scanf("%d",&a);
    for(int i=2;i<=a/2;i++)
    {
        if(a%i==0)
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