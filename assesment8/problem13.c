//perfect single digit sqare
#include<stdio.h>
int disp_single_digit_sqare(int n);
int flag = 0,c;
int main()
{
     int x,m;
    printf("Enter a number: ");
    scanf("%d",&x);
    m=disp_single_digit_sqare(x);
    printf("%d",m);
}
int disp_single_digit_sqare(int n)
{
    if(n==0) 
    return 0;
    c=n%10;
    if(c==4||c==1||c==9)
    {
        flag++;
    }
    n=n/10;
    disp_single_digit_sqare(n);
    return flag;
}
