//Write a function to calculate the sum of all 2 digit numbers having 5 in ones place using recursion.
#include<stdio.h>
int disp_2digit_ones5(int);
int sum;
int main()
{
    int x;
   x=disp_2digit_ones5(10);
   printf("%d\n",x);
}

int disp_2digit_ones5(int n)
{
   if(n>=100)
   return 0;
   if(n%10==5)
   {   
    return n+disp_2digit_ones5(n+1);
   }
   else
   {
    return disp_2digit_ones5(n+1);
   }
}