//Write a function to check whether a given number is prime or not using recursion.
#include<stdio.h>
void check_prime(int n,int i=0);
int flag = 0;
int main()
{
     int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    check_prime(x,1);
}
void check_prime(int n, int i)
{
    if(i>n)
    {
       if(flag==2)
       printf("prime");
       else
       printf("not prime");
      return;
    }
    if(n%i==0)
    {
        flag++;
    }
    check_prime(n, i + 1);
}
