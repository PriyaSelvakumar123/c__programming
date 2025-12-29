//two digit reverse/
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter Number :");
    scanf("%d",&a);
    b=a%10;
    a=a/10;
    b=b*10;
    b=a+b;
    printf("Result = %d",b);
}