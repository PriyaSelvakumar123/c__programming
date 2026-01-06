//get 5 num print sum of all end if 0
#include<stdio.h>
int main()
{
    int a[100],sum=0;
    printf("Enter five number:");
    for(int i=0;i<100;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
        if(a[i]==0)
        break;

    }
    printf("%d",sum);
}