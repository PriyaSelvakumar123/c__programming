//Write a function to remove the last digit of a number if it is odd using recursion.
#include<stdio.h>
void cheak_last_digit_odd(int);
int s=1,c,l;
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    cheak_last_digit_odd(x);
    s=s/10;
    c=x%10;
    if(c%2==1)
    {
       x=x-s;
    }
    printf("%d\n",x);
}

void cheak_last_digit_odd(int n)
{
   if(n==0)
   return;
   c=n%10;
   n=n/10;
   s=s*10;
   cheak_last_digit_odd(n);
}