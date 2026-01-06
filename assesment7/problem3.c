//Write a function to calculate the sum of first n natural numbers using loop.
#include<stdio.h>
void disp_sum(int);
int main()
{
    int x=5;
    disp_sum(x);
}
void disp_sum(int n)
{
    int sum=0;
   while(n>=1)
   {
         sum=sum+n;
         n--;
   }
    printf("%d\n",sum);
}