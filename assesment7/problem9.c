//Write a function to calculate the sum of all 2 digit numbers having 5 in ones place using recursion.
#include<stdio.h>
void disp_2digit_ones5(int);
int sum;
int main()
{
   disp_2digit_ones5(10);
   printf("%d\n",sum);
}

void disp_2digit_ones5(int n)
{
   if(n>=100)
   return;
   if(n%10==5)
   {
    sum=sum+n;
   }
    disp_2digit_ones5(n+1);
}