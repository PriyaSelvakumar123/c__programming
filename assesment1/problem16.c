//get one number from user and add 2 then print resullt//
#include<stdio.h>
int main()
{
    int a,b,c,e;
    printf("Enter Number :");
    scanf("%d",&a);
    b=a/100;
    c=b/10;
    b=b%10;
    e=a%100;
    e=e+b*1000+c*100;
    printf("Result = %d",e);
}