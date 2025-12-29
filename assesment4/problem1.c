#include<stdio.h>
int main()
{
      int a=0;
loop:if(a<5)
    {
        a=a+1;
        printf("%d\n",a);
        goto loop;
    }
}