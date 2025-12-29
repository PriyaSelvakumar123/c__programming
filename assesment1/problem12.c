// sum of three digits/
#include<stdio.h>
int main()
{
    int a,b,sum=0;
    printf("Enter Number :");
    scanf("%d",&a);
    b=a%10;
    a=a/10;
    sum=b+sum;
    b=a%10;
    a=a/10;
    sum=b+sum;
    b=a%10;
    sum=b+sum;
    printf("Result = %d",sum);
}