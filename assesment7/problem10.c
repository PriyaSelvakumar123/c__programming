//Write a function to calculate the sum of all 2 digit numbers having 7 in tenss place using recursion.
#include<stdio.h>
void disp_2digit_odd_sum_tens7(int);
int sum;
int main()
{
   disp_2digit_odd_sum_tens7(10);
   printf("%d\n",sum);
}

void disp_2digit_odd_sum_tens7(int n)
{
   if(n>=100)
   return;
   if((n/10==7)&&(n%2==1))
   {
    sum=sum+n;
   }
    disp_2digit_odd_sum_tens7(n+1);
}