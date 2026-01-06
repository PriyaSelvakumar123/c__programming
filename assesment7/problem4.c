//Write a function to calculate the sum of first n natural numbers using recursion.
#include<stdio.h>
void disp_rsum(int);
int sum;
int main()
{
    disp_rsum(6);
    printf("%d\n",sum);
}
void disp_rsum(int n)
{
    if(n<0)
    return ;
    sum=sum+n;
    disp_rsum(n-1);
}