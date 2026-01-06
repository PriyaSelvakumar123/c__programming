//Write a function to display all 2 digit even numbers whose sum of digits is 6 using recursion.
#include<stdio.h>
void disp_2digit_even_sum6(int);
int sum;
int main()
{
    disp_2digit_even_sum6(10);
   
}

void disp_2digit_even_sum6(int n)
{
    if(n>=100)
    return;
    int a,b;
    a=n%10;
    b=n/10; 
    if((a+b==6)&&(a%2==0))
    {
        printf("%d\n",n);
    }
    disp_2digit_even_sum6(n+1);
}