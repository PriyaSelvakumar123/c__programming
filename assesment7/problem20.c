//Write a function to count the number of prime numbers in the range 1 to 10 using recursion.
#include<stdio.h>
void single_check_prime(int i);
int main()
{
    int a=1;
    single_check_prime(a);
}
void single_check_prime(int i)
{
    static int count=0;
    if(i>10)
    { printf("%d",count);
    return;}
    
    if(i==2 || i==3 || i==5 || i==7)
    {
       count++;
    }

    single_check_prime(i+1);
}