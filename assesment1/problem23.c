//1 & 100 odd sub 5,else print as it is/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Number :");
    scanf("%d",&a);
    b=a%10;
    c=a/100;
    a=a-((b%2)&&(c%2))*5;
    printf("Result = %d",a);
}