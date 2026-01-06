#include<stdio.h>
int main()
{
    int a[5],j=0,b[5];
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++)
    {
       if(a[i]%2!=0)
       {
        b[j++]=a[i];
       }
    }
    for(int i=0;i<j;i++)
    {
        printf("%d ",b[i]);
    }
}