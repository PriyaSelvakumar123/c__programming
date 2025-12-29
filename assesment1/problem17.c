#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter Number :");
    scanf("%d",&a);
    b=a%10;
    printf("Result = %d",a-b);
}