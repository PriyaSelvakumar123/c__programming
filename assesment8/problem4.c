//Write a function to calculate the sum of all 2 digit numbers having 7 in tenss place using recursion.
#include<stdio.h>
int disp_2digit_odd_sum_tens7(int);
int sum;
int main()
{
  int l;
  l= disp_2digit_odd_sum_tens7(10);
   printf("%d\n",l);
}

int disp_2digit_odd_sum_tens7(int n)
{
   if(n>=100)
   return 0;
   if((n/10==7)&&(n%2==1))
   {
    return n+disp_2digit_odd_sum_tens7(n+1);
   }
   else
    return disp_2digit_odd_sum_tens7(n+1);
}