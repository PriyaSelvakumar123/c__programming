#include<stdio.h>
int main()
{
      int a=10,c,b;
loop:if(a>=10&&a<70)
    {
        a=a+1;
        if(a%2!=0)
        {
         c=a%10;
         b=a/10;
         if(b+c==7)
         {
          printf("%d\n",a);
         }
        }
        goto loop;
    }
}