//perfect single digit prime
#include<stdio.h>
int disp_single_digit_prime(int n);
int flag = 0,c;
int main()
{
     int x,m;
    printf("Enter a number: ");
    scanf("%d",&x);
    m=disp_single_digit_prime(x);
    printf("%d",m);
}
int disp_single_digit_prime(int n)
{
    if(n==0) 
    return 0;
    c=n%10;
    if(c==2||c==3||c==5||c==7)
    {
        flag++;
    }
    n=n/10;
    disp_single_digit_prime(n);
    return flag;
}
