//Write a function to count the number of prime numbers in the range 1 to 10 using recursion.
#include<stdio.h>
int single_check_prime(int i);
int main()
{
    int a=1,l;
    l=single_check_prime(a);
    printf("%d",l);
}
int single_check_prime(int i)
{
    static int count=0;
    if(i>10)
    { 
    return 0;}
    
    if(i==2 || i==3 || i==5 || i==7)
    {
       count++;
    }

    single_check_prime(i+1);
    return count;
}