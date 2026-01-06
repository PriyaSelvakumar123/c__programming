//Check if a number is prime and if the sum of its digits is 14
#include<stdio.h>
int main()
{
    int a,i,b,l,m;
    printf("Enter the number:");
    scanf("%d",&a);
    i=2;
    b=0;
    while(i<=a/2)
    {
        if(a%i==0)
        {
            b=1;
            break;
        }
        i++;
    }
    l=a%10;
    m=a/10;
    if(l+m==14)
    {
        printf("Sum of digits is 14\n");
    }
    else
    {
        printf("Sum of digits is not 14\n");
    }
    if(b==1)
        printf("Not prime");
    else
        printf("Prime");
}