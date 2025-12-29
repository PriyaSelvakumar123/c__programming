#include<stdio.h>
int main()
{
      int a=0;
loop:if(a<=9)
    {
        a=a+1;
        if(a%2!=0)
        {
          printf("%d\n",a);
        }
        goto loop;
    }
}