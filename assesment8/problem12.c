//print total two digit odd digit
#include<stdio.h>
int disp_tot_2digits_odd(int n);
int flag = 0,c,count;
int main()
{
     int x,m;
    printf("Enter a number: ");
    scanf("%d",&x);
    m=disp_tot_2digits_odd(x);
    if(count%2==0)
    m--;
    printf("%d",m);
}
int disp_tot_2digits_odd(int n)
{
    if(n==0) 
    return 0;
    c=n%100;
    if(c%2!=0)
    {
        flag++;
    }
    n=n/10;
    count++;
    disp_tot_2digits_odd(n);
    return flag;
}
