//perfect two digit sqare
#include<stdio.h>
void disp_two_digit_sqare(int n);
int flag = 0,c,i;
int main()
{
     int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    disp_two_digit_sqare(x);
    printf("%d",flag);
}
void disp_two_digit_sqare(int n)
{
    if(n==0) 
    return;
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
}
