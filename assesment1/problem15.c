//REVERSE THE FIRST TWO DIGITS/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Number :");
    scanf("%d",&a);
    b=a%10;
    a=a-b;
    c=a%100;
    a=a-c;
    c=c/10;
    a=a+b*10+c;
    printf("Result = %d",a);
}