//if odd sub 5,print even as it  is/
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter Number :");
    scanf("%d",&a);
    b=a;
    b=b-(a%2)*5;
    printf("Result = %d",b);
}