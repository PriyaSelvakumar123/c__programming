//Write a function to check whether the first digit of the second last digit of a number is prime or not using recursion.
#include<stdio.h>
void middle_2digits_prime(int n,int i=0);
int flag = 0;
int main()
{
     int x,l;
    printf("Enter a number: ");
    scanf("%d",&x);
    x=x/10;
    l=x/100;
    middle_2digits_prime(l,1);
}
void middle_2digits_prime(int n, int i)
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
    middle_2digits_prime(n, i + 1);
}
