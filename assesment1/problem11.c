//print sum of two digits/
//get one number from user and add 2 then print resullt//
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Number :");
    scanf("%d",&a);
    b=a%10;
    c=a/10;
    b=b+c;
    printf("Result = %d",b);
}