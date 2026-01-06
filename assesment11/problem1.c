//get a number print same value did no use directly
#include<stdio.h>
int main()
{
    int a,*p;
    scanf("%d",&a);
    p=&a;
    printf("%d",*p);
}