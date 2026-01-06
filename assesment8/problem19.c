//lcm of three
#include<stdio.h>
int disp_lcm3(int x, int y, int z);
int main()
{
    int a, b, c,l;
    scanf("%d%d%d", &a, &b, &c);
    l=disp_lcm3(a, b, c);
    printf("%d",l);
}
int disp_lcm3(int x, int y, int z)
{
    int a1=x,a2=y;
    int temp;
    while (y!=0)
    {
        temp = x % y;
        x = y;
        y = temp;
    }
    int lcm2 = (a1 * a2) / x;
    int a3 = z, a4 = lcm2;
    while (z != 0)
    {
        temp = lcm2 % z;
        lcm2 = z;
        z = temp;
    }
    int lcm1 = (a3 * a4)/lcm2;
    return lcm1;
}