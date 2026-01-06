//Write a function to count the total number of digits in a given number using recursion.
#include<stdio.h>
void count_total_digits(int);
int s,c;
int main()
{
    int x;
    scanf("%d",&x);
    count_total_digits(x);
    printf("%d\n",s);
}

void count_total_digits(int n)
{
   if(n==0)
   return;
   c=n%10;
   n=n/10;
   s++;
   count_total_digits(n);
}