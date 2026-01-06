//Write a function to calculate the sum of all digits of a given number using recursion.
#include<stdio.h>
void disp_sum_all_digits(int);
int s,c;
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    disp_sum_all_digits(x);
    printf("%d\n",s);
}

void disp_sum_all_digits(int n)
{
   if(n==0)
   return;
   c=n%10;
   n=n/10;
   s=s+c;
   disp_sum_all_digits(n);
}