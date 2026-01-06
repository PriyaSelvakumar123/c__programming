//Write a function to count the total number of odd digits in a given number using recursion.
#include<stdio.h>
void disp_tot_odd_digits(int n);
int flag = 0,c;
int main()
{
     int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    disp_tot_odd_digits(x);
    printf("%d",flag);
}
void disp_tot_odd_digits(int n)
{
    if(n==0) 
    return;
    c=n%10;
    if(c%2!=0)
    {
        flag++;
    }
    n=n/10;
    disp_tot_odd_digits(n);
}
