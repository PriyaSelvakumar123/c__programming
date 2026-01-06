//get 5 num print avg of all
#include<stdio.h>
int main()
{
    int a[5],sum=0,avg;
    printf("Enter five number:");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++)
    {
        sum=sum+a[i];
    }
    avg=sum/5;
    printf("%d",avg);
}