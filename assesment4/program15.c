#include<stdio.h>
int main()
{
      int a,b=1,c,l,m,n=0,v;
      printf("Enter the number:");
      scanf("%d",&a);
      n=a;
loop:if(a!=0)
    {
        if(a!=0)
        {
        c=a%10;
        if(a==n)
        {
            l=c;
        }
        a=a/10;
        if(a==0)
        {
            m=c;
        }
        b=b*10;
        }
        goto loop;
    }
    b=b/10;
    if(l%2==0)
        {
         n=n;
        }
        else
        {
        n=n-(b*1);
        }
    printf("%d",n);
}