//if number even sub 5,else print result/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Number :");
    scanf("%d",&a);
    c=a;
    b=a%10;
    a=a/10;
    b=b+(a%10);
    c=c-(b%2)*5;
    printf("Result = %d",c);
}