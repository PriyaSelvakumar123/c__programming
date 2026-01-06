//count total digits
#include<stdio.h>
int count_total_digits(int);
int main()
{
    int x, l;
    scanf("%d", &x);
    if(x == 0)
        l = 1;
    else
        l = count_total_digits(x);

    printf("%d\n", l);
    return 0;
}
int count_total_digits(int n)
{
     if(n == 0)
        return 0;
    else
        return 1 + count_total_digits(n / 10);
}
