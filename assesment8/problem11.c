//Write a function to count the total number of odd digits in a given number using recursion.
#include<stdio.h>
int disp_tot_odd_digits(int n);
int flag = 0,c;
int main()
{
     int x,l;
    printf("Enter a number: ");
    scanf("%d",&x);
    l=disp_tot_odd_digits(x);
    printf("%d",l);
}
int disp_tot_odd_digits(int n)
{
    if(n==0) 
    return 0;
    c=n%10;
    if(c%2!=0)
    {
        flag++;
    }
    n=n/10;
    disp_tot_odd_digits(n);
    return flag;
}
