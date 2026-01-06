//print odd two digit num,who sum of digit 14
#include<stdio.h>
int i=10;
int find_2digit_odd_sum7(int p);
int main()
{
    int l;
    while(i<100)
    {
    l=find_2digit_odd_sum7(i);
    if(l>0)
    printf("%d\n",l);
    }
}
int find_2digit_odd_sum7(int p)
{
    int b,a;
    i++;
    b=i%10;
    a=i/10;
    if((b+a==7)&&(b%2==1))
    return i;
    else
    {
        return 0;
    }
}