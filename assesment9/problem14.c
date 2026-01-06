//get num print middle if odd else avg of mid num end if 0
#include<stdio.h>
int main()
{
    int a[100],count=0;
    for(int i=0;i<100;i++)
    {
        scanf("%d",&a[i]);
        count++;
        if(a[i]==0)
        {
        if(count%2==1)
        printf("%d",a[count/2]);
        else
        {
             printf("%d",(a[count/2-1]+a[count/2])/2);
        }
        break;
    }
    }

    }
    
