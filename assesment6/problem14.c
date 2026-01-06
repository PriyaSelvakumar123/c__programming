// Write a program reverse the first and last digit only.
#include<stdio.h>
int main()
{
    int a,l=1,c,n,m;
    printf("Enter the number:");
    scanf("%d",&a);
    c=a;
    while(a!=0)
    {
        a=a/10;
        l=l*10;;
        
    }
    l=l/100;
    n=c%10;
    m=c/(l*10);
    c=(c/10);
    c=c%l;
    printf("%d%d%d",n,c,m);
}