//enter the largest four digit number divisible by 7 and 9
#include<stdio.h>
int main()
{
    for(int i=9999;i>=1000;i--)
    {
        if((i%7==0)&&(i%9==0))
        {
            printf("%d\n",i);
            break;
        }
    }
}