//Write a function to check whether a given number is prime or not using recursion.
#include<stdio.h>
void check_prime_and_sum14(int n,int i=0);
int flag = 0,c,d;
int main()
{
     int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    check_prime_and_sum14(x,1);
    c=x%10;
    d=x/10;
    if(c+d==14)
    printf("sum of digits is 14\n");
    else
    {
        printf("sum of digit not 14\n");
    }
}
void check_prime_and_sum14(int n, int i)
{
    if(i>n)
    {
       if(flag==2)
       printf("prime\n");
       else
       printf("not prime\n");
      return;
    }
    if(n%i==0)
    {
        flag++;
    }
    check_prime_and_sum14(n, i + 1);
}
