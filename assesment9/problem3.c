//get 5 num print smallest
#include<stdio.h>
int main()
{
    int a[5],b;
    printf("Enter five number:");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    b=a[0];
    for(int i=1;i<5;i++)
    {
        if(b>a[i])
        {
            b=a[i];
        }
    }
    printf("%d",b);
}