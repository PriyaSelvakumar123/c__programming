//Count of numbers from 0 to 100000 whose sum of digits is 14
#include<stdio.h>
int main()
{
    int sum=0,d=0,c=0,a;
    for(int i=0;i<100000;i++)
    {
        a=i,d=0;
        for(;a!=0;)
        {
            c=a%10;
            d=d+c;
            a=a/10;
        }
        if(d==14)
        {
            sum++;
        }
    }
    printf("%d\n",sum);
}
