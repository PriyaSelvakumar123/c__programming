//Write a function to calculate the sum of first n natural numbers using recursion.
#include<stdio.h>
int disp_rsum(int);
int sum;
int main()
{
    int l;
    l=disp_rsum(6);
    printf("%d\n",l);
}
int disp_rsum(int n)
{
    if(n<0)
    return 0;
   else
    return n + disp_rsum(n-1);
}