//get num add two array upto 50 store sum at 51
#include<stdio.h>
int main()
{
    int a[51],b[51],sum=0;
    for(int i=0;i<50;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<50;i++)
    {
        scanf("%d",&b[i]);
    }
    for(int i=0;i<50;i++)
    {
        sum=a[i]+b[i];
    }
    a[51]=sum;
    printf("%d",a[51]);
}