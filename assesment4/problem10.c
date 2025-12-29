#include<stdio.h>
int main()
{
      int a=70,sum=0;
loop:if(a>=70&&a<=79)
    {
        a=a+1;
        if(a%2!=0)
        {
            sum=sum+a;
          
        }
        goto loop;
    }
     printf("%d",sum);
}