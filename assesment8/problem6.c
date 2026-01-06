//sum of total digits
#include<stdio.h>
int c;
int count_total_sum(int);
int main()
{
    int x,l;
    scanf("%d", &x);
    if(x == 0)
        l = 1;
    else
        l = count_total_sum(x);

    printf("%d\n", l);
    return 0;
}
int count_total_sum(int n)
{
     if(n == 0)
        return 0;
    else
        c=n%10; 
        return c + count_total_sum(n / 10);
}
