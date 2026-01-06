//count = 1 to 10000 sum of digit 14
#include<stdio.h>
void disp_count_sum14();
int sum=0,c;
int main()
{
    disp_count_sum14();
    printf("%d\n",sum);
}

void disp_count_sum14()
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
}