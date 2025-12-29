//num 10th place odd sub 5,even as it is/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Number :");
    scanf("%d",&a);
    b=a/10;
    b=b%10;
    a=a-(b%2)*5;
    printf("Result = %d",a);
}