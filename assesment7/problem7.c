//Write a function to display all 2 digit odd numbers whose sum of digits is 7 using recursion.
#include<stdio.h>
void disp_2digit_odd_sum7(int);
int sum;
int main()
{
    disp_2digit_odd_sum7(10);
   
}

void disp_2digit_odd_sum7(int n)
{
    if(n>=100)
    return;
    int a,b;
    a=n%10;
    b=n/10; 
    if((a+b==7)&&(a%2==1))
    {
        printf("%d\n",n);
    }
    disp_2digit_odd_sum7(n+1);
}