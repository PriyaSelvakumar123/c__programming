#include<stdio.h>
int main()
{
    int a[5],b[5],count=0,count1=0;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++)
    {
        count=0;
      for(int j=1;j<=a[i];j++)
      {
        if(a[i]%j==0)
        {
        count++;
        }
      }
      if(count!=2)
      b[count1++]=a[i];
    }
    for(int j=0;j<count1;j++)
    {
    printf("%d ",b[j]);
    }
    
}