#include<stdio.h>
int main()
{
      int a,n=2,l=0;
      printf("Enter the number:");
      scanf("%d",&a);
loop:if(n<a)
    {
        if(a%n==0)
        {
            l++;
        }
       n++;
       goto loop;
    }
    if(l==0)
    printf("Prime");
    else
     printf("Not prime");
}