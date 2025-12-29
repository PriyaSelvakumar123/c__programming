#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    printf("Enter the number :");
    scanf("%d",&a);
    c=a%10;
    d=a/10;
    d=d%10;
    e=a/100;
    e=e%10;
    f=a/1000;
    b=((c==e)&&(d==f));
    printf("Result = %d",b);
}