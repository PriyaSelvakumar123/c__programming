//perfect two digit sqare
#include<stdio.h>
int disp_two_digit_sqare(int n);
int flag = 0,c,i;
int main()
{
     int x,m;
    printf("Enter a number: ");
    scanf("%d",&x);
    m=disp_two_digit_sqare(x);
    printf("%d",m);
}
int disp_two_digit_sqare(int n)
{
    if(n==0) 
    return 0;
    c=n%100;
    i=4;
    while(i<c/2)
    {
      if(i*i==c)
     {
       flag++;
       break;
     }
       i++;
    }
        n=n/10;
    disp_two_digit_sqare(n);
    return flag;
}
