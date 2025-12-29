//print ten's digit/
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter Number :");
    scanf("%d",&a);
    b=a/10;
    b=b%10;
    printf("Result = %d",b);
}