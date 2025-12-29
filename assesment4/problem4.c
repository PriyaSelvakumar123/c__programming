#include<stdio.h>
int main()
{
      int a=0,sum=0;
loop:if(a<6)
    {
        a=a+1;
        sum=sum+a;
        goto loop;
    }
    printf("%d",sum);
}