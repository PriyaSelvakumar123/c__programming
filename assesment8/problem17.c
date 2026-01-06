//count = 1 to 10000 sum of digit 14
#include<stdio.h>
int disp_count_sum14();
int sum=0,c;
int main()
{
    int l=disp_count_sum14();
    printf("%d\n",l);
}

int disp_count_sum14()
{
    int n=10;
    while(n<100000)
    {
       int a=n,d=0;
        while(a!=0)
        {
            c=a%10;
            d=d+c;
            a=a/10;
        }
        if(d==14)
        {
            sum++;
        }
        n++;
    }
    return sum;
}