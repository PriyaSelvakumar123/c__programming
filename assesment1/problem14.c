//reverse of three digit/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Number :");
    scanf("%d",&a);
    b=a%10;
    a=a/10;
    c=a%10;
    a=a/10;
    printf("Result = %d%d%d",b,c,a);
}