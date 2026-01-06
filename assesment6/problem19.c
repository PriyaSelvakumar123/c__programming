//C program to check whether the second last digit of a number is prime or not
#include<stdio.h>
int main()
{
    int a,b,c,i;
    printf("Enter the number:");
    scanf("%d",&a);
    c=a%1000;
    c=a/10;
    i=2;
    b=0;
    while(i<=c/2)
    {
        if(c%i==0)
        {
            b=1;
            break;
        }
        i++;
    }
    if(b==1)
        printf("Not prime");
    else
        printf("Prime");
}