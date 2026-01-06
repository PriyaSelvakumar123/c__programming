//Write a function to swap the first and last digits of a given number using recursion.
#include<stdio.h>
void disp_inter_first_last_digits(int);
int s=1,c,d,e;
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    d=x%10;
    disp_inter_first_last_digits(x);
    s=s/10;
    e=x/s;
    x=x%s;
    x=x/10;
    printf("%d%d%d\n",d,x,e);
}

void disp_inter_first_last_digits(int n)
{
   if(n==0)
   return;
   c=n%10;
   n=n/10;
   s=s*10;
   disp_inter_first_last_digits(n);
}