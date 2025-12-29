#include<stdio.h>
int main()
{
      int a,b=0,c;
      printf("Enter the number:");
      scanf("%d",&a);
loop:if(a!=0)
    {
        c=a%10;
        a=a/10;
        b=b+1;
        goto loop;
    }
     printf("%d",b);
}