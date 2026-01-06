//C program to check whether a number is prime or not
#include<stdio.h>
int main()
{
    int a,i,b;
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
    if(b==1)
        printf("Not prime");
    else
        printf("Prime");
}