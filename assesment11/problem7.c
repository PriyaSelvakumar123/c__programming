//compare from one to another (integer)
#include <stdio.h>
int l=1;
void mem_comp(int *src, int *dst, int size)
{
    int i;
    for(i = 1; i <=size; i++)
    {
       if(dst[i]!=src[i])
       {
       l=0;
       return;
       }
    }
}
int main()
{
    int src[5],dst[5];
    for(int i=1;i<=5;i++)
    {
        scanf("%d",&src[i]);
    }
    for(int i=1;i<=5;i++)
    {
        scanf("%d",&dst[i]);
    }
    mem_comp(src, dst, 5);
    if(l==1)
    printf("Sucess");
    else
    {
        printf("Failure");
    }
}
