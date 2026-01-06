//Write a function to display all 2 digit odd numbers below 20 using recursion.
#include<stdio.h>
void disp_2digit_odd_below20(int);
int sum;
int main()
{
    disp_2digit_odd_below20(10);
   
}
void disp_2digit_odd_below20(int n)
{
    if(n>20)
    return ;
    if(n%2==1)
    {
        printf("%d\n",n);
    }
    disp_2digit_odd_below20(n+1);
}