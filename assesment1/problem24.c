//get one number from user and add all digits then print total digit must be one digit//
#include<stdio.h>
int main()
{
    int a,b,c,e,f,l;
    printf("Enter Number :");
    scanf("%d",&a);
    b=a%10;
    c=a/10;
    c=c%10;
    e=a/100;
    f=b+c+e;
    f=((f<=9)*f)+((f>9)*((f%10)+(f/10)));
    f=((f<=9)*f)+((f>9)*((f%10)+(f/10)));
    printf("Result = %d",f);
}