//get 5 num print sum of all
#include<stdio.h>
int main()
{
    int a[5],sum=0;
    printf("Enter five number:");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);
}