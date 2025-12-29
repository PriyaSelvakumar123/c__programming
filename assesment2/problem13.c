#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the number :");
    scanf("%d",&a);
    c=a%10;
    d=a/10;
    d=d%10;
    b=(c==d);
    printf("Result = %d",b);
}