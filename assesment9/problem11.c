//get 5 num print rev of all
#include<stdio.h>
int main()
{
    int a[5],sum=0;
    printf("Enter five number:");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=5-1;i>=0;i--)
    {
         printf("%d ",a[i]);
    }
    
}