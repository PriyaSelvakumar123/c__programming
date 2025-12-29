//one's digit as 2/
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter Number :");
    scanf("%d",&a);
    b=a%10;
    a=a-b;
    printf("Result = %d",a+2);
}