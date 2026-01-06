//print 1 to 5
#include<stdio.h>
int i;
int arrange_ascend(int p);
int main()
{
    int l;
    while(i<5)
    {
    l=arrange_ascend(i);
    printf("%d\n",l);
    }
}
int arrange_ascend(int p)
{
    i++;
    return i;
}