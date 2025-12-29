#include<stdio.h>
int main()
{
      int a=10;
loop:if(a>=10&&a<20)
    {
        a=a+1;
        if(a%2!=0)
        {
          printf("%d\n",a);
        }
        goto loop;
    }
}