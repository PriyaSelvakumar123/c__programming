//ten's digit as 0/
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter Number :");
    scanf("%d",&a);
    b=a/10;
    b=b%10;
    a=a-(b*10);
    printf("Result = %d",a);
}