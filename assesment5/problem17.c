//C program to check whether a number is prime and sum of digits is 14
#include<stdio.h>
int main()
{
    int a,b,c,sum=0;
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
    while(a!=0)
    {
        c=a%10;
        sum=sum+c;
        a=a/10;
    }
    if(b==1)
        printf("Not prime & ");
    else
        printf("Prime & ");
    if(sum==14)
       printf("sum of digits is 14");
    else
       printf("sum of digit not 14");
}