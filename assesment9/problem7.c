#include<stdio.h>
int main()
{
    int a[5],num=0;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++)
    {
       for (int j = 0; j < 4; j++)
       {
        
       if(a[j]<a[j+1])
       {
       int temp=a[j];
       a[j]=a[j+1];
       a[j+1]=temp;
       }
       }
    }
    for(int i=0;i<5;i++)
    {
    printf("%d ",a[i]);
    }
    
}